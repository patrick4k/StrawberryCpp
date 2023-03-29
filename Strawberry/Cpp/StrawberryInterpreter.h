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
        // Scope and Memory //
        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Reference>> data;
            std::shared_ptr<Scope> next;
            explicit Scope(std::unordered_map<std::string, std::shared_ptr<Reference>> d,std::shared_ptr<Scope> n = nullptr):
            data(std::move(d)), next(std::move(n)){}
        };

        class Memory {
        public:
            std::shared_ptr<Scope> head;
            void insert_head(std::unordered_map<std::string, std::shared_ptr<Reference>> data) {
                head = std::make_shared<Scope>(std::move(data), std::move(head));
            }
            void remove_head() {
                head = head->next;
            }
        };

    // ---------------------------------------------------------------------------------------------------- //
        // Memory Management Methods //
        Memory memory;

        void scope_in() {
            memory.insert_head(std::unordered_map<std::string, std::shared_ptr<Reference>>());
        }

        void scope_out() {
            memory.remove_head();
        }

        void declare(const std::string& id, std::shared_ptr<Value> val) const {
            if (memory.head->data.find(id) == memory.head->data.end()) {
                auto ref = new Reference();
                ref->set(std::move(val));
                memory.head->data.insert_or_assign(id, std::shared_ptr<Reference>(ref));
            }
            else throw std::runtime_error("'" + id + "' is already declared in scope");
        }

        void assign(const std::string& id, std::shared_ptr<Value> val) const {
            get_from_memory(id)->set(std::move(val));
        }

        std::shared_ptr<Reference> get_from_memory(const std::string& id) const {
            auto scope = memory.head.get();
            auto value = scope->data.find(id);
            while (value == scope->data.end()) {
                if (scope->next == nullptr)
                    throw std::runtime_error("No variable '" + id + "' in memory\n");
                scope = scope->next.get();
                value = scope->data.find(id);
            }
            return value->second;
        }

/* ==================================================================================================== */
    /* Visitor Overrides */
    public:
        std::any visitScript(StrawberryParser::ScriptContext *ctx) override;
        void TestScope();
    };


} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
