//
// Created by patrick on 3/10/23.
//

#include "StrawberryManager.h"
#include "types/containers/List.h"
#include "util/Warnings.h"


namespace strawberrycpp {

    std::any StrawberryManager::defaultResult() {
        return std::make_shared<Reference>();
    }

/* ================================================================================================================== */
    /* Functions */

    /* -------------------------------------------------------------------------------------------------------------- */
        /* FunctionHandle */
    std::shared_ptr<Reference> StrawberryManager::FunctionHandle::execute_function(std::shared_ptr<Reference> args) {
        for (auto action: this->fn_ctx->scope()->action_()) {

        }
        return std::make_shared<Reference>();
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* FunctionLibrary */
    void StrawberryManager::FunctionLibrary::add(const std::string &fn_name, std::unique_ptr<FunctionHandle> fn) {
        this->my_fns->insert_or_assign(fn_name, std::move(fn));
    }

    std::unique_ptr<StrawberryManager::FunctionHandle> &StrawberryManager::FunctionLibrary::get(const std::string &fn_name) {
        auto fn_location = this->my_fns->find(fn_name);

        if (fn_location != this->my_fns->end())
            return fn_location->second;

        std::unique_ptr<FunctionHandle>* fn = nullptr;
        for (auto& map : *this->included) {
            fn_location = map.second.find(fn_name);

            if (fn_location != map.second.end()) {
                if (fn) throw std::runtime_error("Cannot call included " + fn_name + "() with without tag");
                fn = &fn_location->second;
            }
        }

        if (!fn)
            throw std::runtime_error("Cannot find fn definition for " + fn_name);

        return *fn;
    }

    std::unique_ptr<StrawberryManager::FunctionHandle> &
    StrawberryManager::FunctionLibrary::get_with_tag(const std::string &tag, const std::string &fn_name) {
        auto find_tag_fns = this->included->find(tag);
        if (find_tag_fns == this->included->end())
            throw std::runtime_error("Cannot find included tag " + tag);

        auto find_fn = find_tag_fns->second.find(fn_name);
        if (find_fn == find_tag_fns->second.end())
            throw std::runtime_error("Cannot find fn definition " + tag + "::" + fn_name + "()");

        return find_fn->second;
    }

/* ================================================================================================================== */
    /* Memory Allocation */
    void StrawberryManager::scope_in() {
        auto clean_memory = std::unordered_map<std::string,std::shared_ptr<Reference>>();
        innerScope = std::make_shared<Scope>(clean_memory, std::move(innerScope));
    }

    void StrawberryManager::scope_out() {
        if (auto outer = innerScope->outerScope) {
            innerScope = outer;
            return;
        }
        throw std::runtime_error("Stepped scope into NULL");
    }

    void StrawberryManager::new_default(const std::shared_ptr<Value> &value) {
        program_default = std::make_shared<Default>(std::make_shared<Reference>(value), std::move(program_default));
    }

    std::shared_ptr<Reference> StrawberryManager::get_default() {
        return program_default->default_ref;
    }

    std::shared_ptr<Reference> StrawberryManager::pop_default() {
        auto def = program_default->default_ref;
        program_default = program_default->outer_default;
        if (program_default == nullptr) throw std::runtime_error("POP DEFAULT INTO NULL");
        return def;
    }

    std::shared_ptr<Reference>
    StrawberryManager::declare(const std::string &id, const std::shared_ptr<Value> &val) const {
        if (innerScope->memory.find(id) == innerScope->memory.end()) {
            auto ref = std::make_shared<Reference>(val);
            innerScope->memory.insert_or_assign(id, ref);
            return ref;
        }
        else throw std::runtime_error("'" + id + "' is already declared in scope");
    }

    std::shared_ptr<Reference> StrawberryManager::declare(const std::string &id) const {
        return declare(id, std::make_shared<Value>());
    }

    std::shared_ptr<Reference> StrawberryManager::get_from_memory(const std::string &id) const {
        auto scope = innerScope.get();
        auto value = innerScope->memory.find(id);
        while (value == scope->memory.end()) {
            if (!scope->outerScope)
                throw std::runtime_error("No variable '" + id + "' in memory\n");
            scope = scope->outerScope.get();
            value = scope->memory.find(id);
        }
        return value->second;
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Operations */
    /**
     * Performs binary operation on two references. If one references operator priority is greater than the other the
     * execution of the greater is favored. A function of class Value is passed in for re-usability purposes across
     * operators.
     */
    std::shared_ptr<Reference> StrawberryManager::do_binary_operation(
            std::shared_ptr<Value> (Value::*func)(std::shared_ptr<Value>,std::shared_ptr<Value>),
            const std::shared_ptr<Reference> &ref1, const std::shared_ptr<Reference> &ref2) {

        std::shared_ptr<Reference> refs[2] = {ref1, ref2};

        // Check if list
        for (int i = 0; i < 2; ++i) {
            if (auto list1 = refs[i]->get_referenced_value()->as<List>()) {
                auto out_list = std::make_shared<List>();

                /* If both refs are list */
                if (auto list2 = refs[-(i - 1)]->get_referenced_value()->as<List>()) {
                    // Do operation and append
                    int max_len = (list1->size() >= list2->size()) ? list1->size() : list2->size();
                    for (int j = 0; j < max_len; ++j)
                        out_list->append(do_binary_operation(func, list1->get(j), list2->get(j))->deref());
                }

                /* If one ref is list */
                else {
                    // Append operations on new out_list
                    for (int j = 0; j < list1->size(); ++j) {
                        refs[i] = list1->get(j);
                        out_list->append(do_binary_operation(func, refs[0], refs[1])->deref());
                    }
                }
                return std::make_shared<Reference>(out_list);
            }
        }

        /* Non-list operations */
        std::shared_ptr<Value> result;

        if (ref1->operatorPriority() >= ref2->operatorPriority()) {
            result = (ref1.get()->*func)(ref1->deref(),ref2->deref());
            if (result) return std::make_shared<Reference>(result);
        }

        result = (ref2.get()->*func)(ref1->deref(),ref2->deref());
        if (result) return std::make_shared<Reference>(result);

        result = (ref1.get()->*func)(ref1->deref(), ref2->deref());
        if (result) return std::make_shared<Reference>(result);

        throw std::runtime_error("Cannot conduct operation for types "
                                 + ref1->deref()->typeName() + " and " + ref2->deref()->typeName());
    }

    /**
     * Does a binary operation func(identifier, value) and sets identifier to returned value.
     */
    std::shared_ptr<Reference> StrawberryManager::do_binary_assign_operation(
            std::shared_ptr<Value> (Value::*func)(std::shared_ptr<Value>,std::shared_ptr<Value>),
            StrawberryParser::Identifyer_Context* id_ctx,
            const std::shared_ptr<Reference>& val_ref) {
        std::shared_ptr<Reference> target;
        if (id_ctx)
            target = std::any_cast<std::shared_ptr<Reference>>(visit(id_ctx));
        else
            target = this->get_default();
        target->set(do_binary_operation(func, target, val_ref)->deref());
        return target->to_new_reference();
    }

    /**
     * Returns a lambda to a binary operation between two references and a supplied function.
     */
    std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>
            StrawberryManager::binary_operation_reference(
                    std::shared_ptr<Value> (Value::*func)(std::shared_ptr<Value>,std::shared_ptr<Value>)) {
        return [func](const std::shared_ptr<Reference>& ref1,const std::shared_ptr<Reference>& ref2) {
            return do_binary_operation(func, ref1, ref2);
        };
    }

} // strawberrycpp
