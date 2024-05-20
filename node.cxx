
#include "node.hxx"
#include <iostream>

int main() {
    int number{3};
    int gnumber{5};
    custom::node<int> newnode(number), secondnode(gnumber);
    if (newnode.getvalue() < secondnode.getvalue()) {
        std::cout << "success";
    }
    custom::node<int>* n = new custom::node<int>(number);
    delete n;
    std::cout << "success delete itself";
    return 0;
}