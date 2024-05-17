//
// Created by Ioann Marzan on 17.05.2024.
//

#ifndef AVL_NODE_HXX
#define AVL_NODE_HXX

namespace custom {

    template<class valtype>
    class node {
    public:
        valtype* value;
        signed char balance;
        node<valtype>* left;
        node<valtype>* right;
    public:
        node(valtype* value, char balance = 0, valtype* left = nullptr, valtype* right = nullptr) : value(value), balance(balance), left(left), right(right) {
            /*to use initializer list constructor*/
        }

        node() : value{}, balance{}, left{}, right{}
        {}

        ~node() {
            delete value;
            delete left;
            delete right;
        }
        node(const node& copy) = delete;
        node& operator=(const node& operand) = delete;

    };

} // custom

#endif //AVL_NODE_HXX
