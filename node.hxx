#pragma once
#include <iostream>
#include <memory>

namespace custom {

    template<class valtype>
    class node {
    private:
        std::unique_ptr<valtype> value;

    public:
        signed char balance;
        std::unique_ptr<node<valtype>> left;
        std::unique_ptr<node<valtype>> right;

    public:
        explicit node(valtype value, char balance = 0, node<valtype>* left = nullptr, node<valtype>* right = nullptr) : value(new valtype(value)), balance(balance), left(left), right(right) {
            /*to use initializer list constructor*/
        }// other converting is prohibited

        node() = delete; // empty object mustn't exist

        const valtype& getvalue() const {
            return *value;
        }

        ~node() {
            value.reset();
            left.reset();
            right.reset();
        }

        node(const node& copy) = delete;
        node& operator=(const node& arg) = delete;

    };
}