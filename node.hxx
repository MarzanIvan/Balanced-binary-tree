#pragma once
#include <iostream>

namespace custom {

    template<class valtype>
    class node {
    private:
        valtype* value;

    public:
        signed char balance;
        node<valtype>* left;
        node<valtype>* right;

    public:
        explicit node(valtype value, char balance = 0, node<valtype>* left = nullptr, node<valtype>* right = nullptr) : value(new valtype(value)), balance(balance), left(left), right(right) {
            /*to use initializer list constructor*/
        }// other converting is prohibited

        node() = delete; // empty object mustn't exist

        const valtype* getvalue() const {
            if (value) return value;
        }


        ~node() {
            delete value;
            delete left;
            delete right;
        }

        node(const node& copy) = delete;
        node& operator=(const node& arg) = delete;

    };
}