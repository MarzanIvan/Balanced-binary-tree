
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
    custom::node<int,G>* nm = new custom::node<int,G>(10);
    custom::node<int,G> newnode(number), secondnode(gnumber);
    newnode.setleft(nm);
    std::cout << newnode.left.get()->getvalue();
    return 0;
}