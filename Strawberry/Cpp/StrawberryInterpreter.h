//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include <memory>
#include <utility>

#include "StrawberryParserBaseVisitor.h"
#include "types/Value.h"
#include "types/expressions/Number.h"
#include "types/Reference.h"

namespace antlrcpptest {

    class StrawberryInterpreter: public StrawberryParserBaseVisitor {

/* ==================================================================================================== */
    /* Memory Allocation */
    private:
    // ---------------------------------------------------------------------------------------------------- //
        // Scope Linked List //
        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Reference>> memory;
            std::shared_ptr<Scope> outerScope;
            explicit Scope(std::unordered_map<std::string, std::shared_ptr<Reference>> d, std::shared_ptr<Scope> n = nullptr):
                    memory(std::move(d)), outerScope(std::move(n)){}
        };

    // ---------------------------------------------------------------------------------------------------- //
        // Memory Management Methods //
        std::shared_ptr<Scope> innerScope;

        void scope_in() {
            auto clean_memory = std::unordered_map<std::string,std::shared_ptr<Reference>>();
            innerScope = std::make_shared<Scope>(clean_memory, std::move(innerScope));
        }

        void scope_out() {
            innerScope = innerScope->outerScope;
        }

        void declare(const std::string& id, const std::shared_ptr<Value>& val) const {
            if (innerScope->memory.find(id) == innerScope->memory.end()) {
                innerScope->memory.insert_or_assign(id, std::make_shared<Reference>(val));
            }
            else throw std::runtime_error("'" + id + "' is already declared in scope");
        }

        void assign(const std::string& id, std::shared_ptr<Value> val) const {
            get_from_memory(id)->set(std::move(val));
        }

        [[nodiscard]] std::shared_ptr<Reference> get_from_memory(const std::string& id) const {
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

/* ==================================================================================================== */
    /* Visitor Overrides */
    public:
        std::any visitScript(StrawberryParser::ScriptContext *ctx) override;
        void testRef();
    };


} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
