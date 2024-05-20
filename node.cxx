
#include "node.hxx"
#include <iostream>
#include <map>
struct G{
    bool operator()(int arg1, int arg2) const {
        return arg1 < arg2;
    }
};

bool fun(int arg1, int arg2) {
    return arg1 < arg2;
}

int main() {
    int number{3};
    int gnumber{5};
    custom::node<int,G> newnode(number), secondnode(gnumber);
    if (newnode.compare(secondnode)) {
        std::cout << "success";
    }
    custom::node<int, G>* n = new custom::node<int,G>(number);
    delete n;
    std::cout << "success delete itself";
    return 0;
}