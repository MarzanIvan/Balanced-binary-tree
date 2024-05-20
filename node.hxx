#pragma once
#include <iostream>
#include <memory>

namespace custom {

    template<class valtype, class comparator>
    class node {
    private:
        std::unique_ptr<valtype> value;
        const comparator comp; //custom comparator

    public:
        signed char balance;
        std::unique_ptr<node<valtype, comparator>> left;
        std::unique_ptr<node<valtype, comparator>> right;

    public:
        explicit node(valtype value, char balance = 0, node<valtype, comparator>* left = nullptr, node<valtype, comparator>* right = nullptr) : value(new valtype(value)), balance(balance), left(left), right(right) {
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

        // set pointer of left node (delete nullptr(worthless) and set pointer)
        void setleft(node<valtype, comparator>* child) {
            left.reset(child);
        }

        // set pointer of right node (delete nullptr(worthless) and set pointer)
        void setright(node<valtype, comparator>* child) {
            right.reset(child);
        }

        // swap nodes to exchange pointers
        void swapleft(std::unique_ptr<node<valtype, comparator>>& child) {
            left.swap(child);
        }

        // swap nodes to exchange pointers
        void swapright(std::unique_ptr<node<valtype, comparator>>& child) {
            right.swap(child);
        }

        // (using ref) to support lambda, functor and pointer function comparators
        bool compare(const node<valtype,comparator>& arg) {
            return comp(*this->value.get(), *arg.value.get());
        }

        // (using pointer) to support lambda, functor and pointer function comparators
        bool compare(const node<valtype,comparator>* arg) {
            return comp(*this->value.get(), *arg->value.get());
        }

        node(const node& copy) = delete;
        node& operator=(const node& arg) = delete;

    };
}