//
// Created by Ioann Marzan on 17.05.2024.
//

#include "node.hxx"
#include <iostream>

namespace custom {
} // custom

int main() {
    custom::node<int> newnode;
    std::cout << &newnode.right;
    return 0;
}