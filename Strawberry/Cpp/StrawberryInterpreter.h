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

    private:
        /* ==================================================================================================== */
//        Memory Allocation + Scope

        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Value>> data;
            std::shared_ptr<Scope> next;
            explicit Scope(std::unordered_map<std::string, std::shared_ptr<Value>>  d, std::shared_ptr<Scope> n = nullptr) :
                    data(std::move(d)),
                    next(std::move(n))
            {}
        };

        class Memory {
        public:
            std::shared_ptr<Scope> head;
            void insert_head(std::unordered_map<std::string, std::shared_ptr<Value>> data) {
                head = std::make_shared<Scope>(std::move(data), std::move(head));
            }
        };

        Memory memory;

        void enterScope() {
            memory.insert_head(std::unordered_map<std::string, std::shared_ptr<Value>>());
        }

        void declare(const std::string& id, std::shared_ptr<Value> val) const {
            if (memory.head->data.find(id) == memory.head->data.end()) assign(id, val);
            else throw std::runtime_error(id + " is already declared in scope");
        }

        void assign(const std::string& id, std::shared_ptr<Value> val) const {
            memory.head->data.insert_or_assign(id, std::move(val));
        }

        std::shared_ptr<Value> retrieve(const std::string& id) const {
            auto scope = memory.head.get();
            while (scope->data.find(id) == scope->data.end()) {
                if (scope->next == nullptr) return std::make_shared<Value>(); // TODO: return null
                else scope = scope->next.get();
            }
            return scope->data[id];
        }

    public:
        std::any visitScript(StrawberryParser::ScriptContext *ctx) override;
        void TestScope();
    };


} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
