//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYMANAGER_H
#define LIBANTLR4_STRAWBERRYMANAGER_H

#include <memory>
#include <utility>

#include "StrawberryParserBaseVisitor.h"
#include "types/Value.h"
#include "types/expressions/Number.h"
#include "types/Reference.h"

namespace strawberrycpp {

class StrawberryManager: public StrawberryParserBaseVisitor {

protected:
    std::any defaultResult() override;

/* ================================================================================================================== */
    /* Memory Allocation */
    protected:
    // -------------------------------------------------------------------------------------------------------------- //
        // Scope Linked List //
        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Reference>> memory;
            std::shared_ptr<Scope> outerScope;
            explicit Scope(std::unordered_map<std::string,std::shared_ptr<Reference>> d,
                           std::shared_ptr<Scope> n = nullptr): memory(std::move(d)), outerScope(std::move(n)){}
        };

    // -------------------------------------------------------------------------------------------------------------- //
        // Default Linked List //
        class Default {
        public:
            std::shared_ptr<Reference> default_ref;
            std::shared_ptr<Default> outer_default;
            explicit Default(std::shared_ptr<Reference> d,
                              std::shared_ptr<Default> n = nullptr): default_ref(std::move(d)), outer_default(std::move(n)){}
        };

    // -------------------------------------------------------------------------------------------------------------- //
        // Functions //

        class FunctionHandle {
        private:
            strawberrycpp::StrawberryParser::FnDeclarationContext* fn_ctx = nullptr;

        public:
            explicit FunctionHandle(strawberrycpp::StrawberryParser::FnDeclarationContext *ctx): fn_ctx(ctx) {}

            ~FunctionHandle() = default;

            std::shared_ptr<Reference> execute_function(std::shared_ptr<Reference> args);

        };

        class FunctionLibrary {
        protected:
            std::unique_ptr<std::unordered_map<std::string, std::unique_ptr<FunctionHandle>>> my_fns
                        = std::make_unique<std::unordered_map<std::string, std::unique_ptr<FunctionHandle>>>();
            std::unique_ptr<std::unordered_map<std::string,std::unordered_map<std::string,std::unique_ptr<FunctionHandle>>>> included
                         = std::make_unique<std::unordered_map<std::string,
                            std::unordered_map<std::string, std::unique_ptr<FunctionHandle>>>>();

        public:

            void add(const std::string& fn_name, std::unique_ptr<FunctionHandle> fn);
            std::unique_ptr<FunctionHandle>& get(const std::string& fn_name);
            std::unique_ptr<FunctionHandle>& get_with_tag(const std::string& tag, const std::string& fn_name);
        };

    // -------------------------------------------------------------------------------------------------------------- //
        // Memory Management Methods //
    protected:
        std::shared_ptr<Default> program_default;
        std::shared_ptr<Scope> innerScope;
        std::shared_ptr<Scope> defaultScope;
        std::shared_ptr<FunctionLibrary> functionLibrary = std::make_shared<FunctionLibrary>();

    public:
        void scope_in();
        void scope_out();

        void new_default(const std::shared_ptr<Value>& value);
        std::shared_ptr<Reference> get_default();
        std::shared_ptr<Reference> pop_default();

        std::shared_ptr<Reference> declare(const std::string& id, const std::shared_ptr<Value>& val) const;
        std::shared_ptr<Reference> declare(const std::string& id) const;
        [[nodiscard]] std::shared_ptr<Reference> get_from_memory(const std::string& id) const;

/* ================================================================================================================== */
    /* Operation */
    public:
        static std::shared_ptr<Reference> do_binary_operation (
                std::shared_ptr<Value> (Value::*func)(std::shared_ptr<Value>,std::shared_ptr<Value>), /* Binary operation */
                const std::shared_ptr<Reference>& ref1, /* arg1 */
                const std::shared_ptr<Reference>&ref2); /* arg2 */

        std::shared_ptr<Reference> do_binary_assign_operation (
                std::shared_ptr<Value> (Value::*func)(std::shared_ptr<Value>,std::shared_ptr<Value>), /* Binary operation */
                StrawberryParser::Identifyer_Context* id_ctx, /* identifier */
                const std::shared_ptr<Reference>& val_ref); /* value */

        static std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>
        binary_operation_reference(std::shared_ptr<Value> (Value::*func)(std::shared_ptr<Value>, std::shared_ptr<Value>));

/* ================================================================================================================== */
        /* Debug Helpers */
        static void print_scope(const std::shared_ptr<Scope>& scope, const std::string& prelim) {
            for (const auto& item:scope->memory) {
                std::cout << prelim << item.first << ": " << item.second->deref()->typeName()
                                        << " = " << item.second->toDisplay() << std::endl;
            }
        }

        void print_default() {
            print_default("");
        }

        void print_default(std::string prelim) {
            std::stringstream ss;
            auto defaull_ref = this->program_default;
            ss << prelim << "_ : " << defaull_ref->default_ref->deref()->typeName()
                            << " = " << defaull_ref->default_ref->toString();
            while (defaull_ref->outer_default != nullptr) {
                defaull_ref = defaull_ref->outer_default;
                ss << prelim << " -> " << defaull_ref->default_ref->deref()->typeName()
                                << " = " << defaull_ref->default_ref->toString();
            }
            ss << std::endl;
            std::cout << ss.str();
        }

        void print_inner_scope() {
            print_scope(this->innerScope, "");
        }

        void print_memory() {
            auto scope = innerScope;
            int i = 0;
            do {
                std::cout << "Scope " << i << ":" << std::endl;
                print_scope(scope, "  --> ");
                if (!scope->outerScope) break;
                ++i;
                scope = scope->outerScope;
            } while (true);
        }

    };

} // strawberrycpp

#endif //LIBANTLR4_STRAWBERRYMANAGER_H
