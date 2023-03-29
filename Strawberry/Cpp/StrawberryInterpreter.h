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

namespace antlrcpptest {

    class StrawberryInterpreter: public StrawberryParserBaseVisitor {


        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Value*>> data;
            std::shared_ptr<Scope> next;
            explicit Scope(std::unordered_map<std::string, std::shared_ptr<Value*>> d,
                           std::shared_ptr<Scope> n = nullptr)
                    : data(std::move(d)), next(std::move(n)) {}

            void make_weak() {
                for (auto& pair : data) {
                    pair.second = std::shared_ptr<Value*>(pair.second.get(), [](Value**) {});
                }
            }
        };

        class Memory {
        public:
            std::shared_ptr<Scope> head;
            void insert_head(std::unordered_map<std::string, std::shared_ptr<Value*>> data) {
                head = std::make_shared<Scope>(std::move(data), std::move(head));
                head->make_weak();
            }
            void remove_head() {
                head = head->next;
            }
        };

        Memory memory;

        void scope_in() {
            memory.insert_head(std::unordered_map<std::string, std::shared_ptr<Value*>>());
        }

        void scope_out() {
            memory.remove_head();
        }

        void declare(const std::string& id, std::shared_ptr<Value*> val) {
            if (memory.head->data.find(id) == memory.head->data.end()) {
                memory.head->data[id] = val;
            } else {
                throw std::runtime_error("'" + id + "' is already declared in scope");
            }
        }

        void assign(const std::string& id, std::shared_ptr<Value*> val) {
            auto it = memory.head->data.find(id);
            if (it == memory.head->data.end()) {
                throw std::runtime_error("No variable '" + id + "' in memory\n");
            } else {
                *(it->second) = *val;
            }
        }

        std::shared_ptr<Value> get_from_memory(const std::string& id) {
            auto scope = memory.head.get();
            auto value = scope->data.find(id);
            while (value == scope->data.end()) {
                if (scope->next == nullptr)
                    throw std::runtime_error("No variable '" + id + "' in memory\n");
                scope = scope->next.get();
                value = scope->data.find(id);
            }
            return std::shared_ptr<Value>(*value->second);
        }


        /*
*//* ==================================================================================================== *//*
    *//* Memory Allocation *//*
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

        void scope_in() {
            memory.insert_head(std::unordered_map<std::string, std::shared_ptr<Value>>());
        }

        void scope_out() {
            memory.remove_head();
        }

        void declare(const std::string& id, std::shared_ptr<Value> val) const {
            if (memory.head->data.find(id) == memory.head->data.end()) {
                memory.head->data.insert_or_assign(id, val);
            }
            else throw std::runtime_error("'" + id + "' is already declared in scope");
        }

        void assign(const std::string& id, const std::shared_ptr<Value>& val) const {
            auto scope = memory.head.get();
            while (scope != nullptr) {
                auto it = scope->data.find(id);
                if (it != scope->data.end()) {
                    it->second = val;
                    return;
                }
                scope = scope->next.get();
            }
            throw std::runtime_error("'" + id + "' is not declared in scope");
        }

        std::shared_ptr<Value> get_from_memory(const std::string& id) const {
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
        */

/* ==================================================================================================== */
    /* Visitor Overrides */
    public:
        std::any visitScript(StrawberryParser::ScriptContext *ctx) override;
        void TestScope();
    };


} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
