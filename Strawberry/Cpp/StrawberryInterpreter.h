//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include <memory>
#include <utility>

#include "StrawberryParserBaseVisitor.h"
#include "types/Value.h"

namespace antlrcpptest {

    class StrawberryInterpreter: public StrawberryParserBaseVisitor {

/* ==================================================================================================== */
    /* Memory Allocation */
    private:
    // ---------------------------------------------------------------------------------------------------- //
        // Scope and Memory //
        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Value>> data;
            std::shared_ptr<Scope> next;
            explicit Scope(std::unordered_map<std::string, std::shared_ptr<Value>> d,std::shared_ptr<Scope> n = nullptr):
            data(std::move(d)), next(std::move(n)){}
        };

        class Memory {
        public:
            std::shared_ptr<Scope> head;
            void insert_head(std::unordered_map<std::string, std::shared_ptr<Value>> data) {
                head = std::make_shared<Scope>(std::move(data), std::move(head));
            }
            void remove_head() {
                head = head->next;
            }
        };

    // ---------------------------------------------------------------------------------------------------- //
        // Memory Management Methods //
        Memory memory;

        void enterScope() {
            memory.insert_head(std::unordered_map<std::string, std::shared_ptr<Value>>());
        }

        void exitScope() {
            memory.remove_head();
        }

        void declare(const std::string& id, std::shared_ptr<Value> val) const {
            if (memory.head->data.find(id) == memory.head->data.end()) assign(id, std::move(val));
            else throw std::runtime_error(id + " is already declared in scope");
        }

        void assign(const std::string& id, std::shared_ptr<Value> val) const {
            memory.head->data.insert_or_assign(id, std::move(val));
        }

        std::shared_ptr<Value> get_from_memory(const std::string& id) const {
            auto scope = memory.head.get();
            auto value = scope->data.find(id);
            while (value == scope->data.end()) {
                if (scope->next == nullptr)
                    throw std::runtime_error("No variable " + id + " in memory\n");
                else
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
