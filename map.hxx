#pragma once

#include <stdint.h>
#include "node.hxx"

namespace custom {

    template<class valtype, class comparator>
    class map {
        custom::node<valtype,comparator>* head;
        intmax_t size;

        map() {
            size = 0;
            head = nullptr;
        }

        map(custom::node<valtype,comparator>* head) : head{head} {
            size = 1;
        }

        map(valtype* value) : head() {

        }

        //operator[key]
        //empty() const
        //size() const
        //to remove node by unique we use release()


    };

} // custom
/*
node* singleRightRotate(node* &t)
{
    node* u = t->left;
    t->left = u->right;
    u->right = t;
    t->height = max(height(t->left), height(t->right))+1;
    u->height = max(height(u->left), t->height)+1;
    return u;
}
node* singleLeftRotate(node* &t)
{
    node* u = t->right;
    t->right = u->left;
    u->left = t;
    t->height = max(height(t->left), height(t->right))+1;
    u->height = max(height(t->right), t->height)+1 ;
    return u;
}

node* doubleLeftRotate(node* &t)
{
    t->right = singleRightRotate(t->right);
    return singleLeftRotate(t);
}
node* doubleRightRotate(node* &t)
{
    t->left = singleLeftRotate(t->left);
    return singleRightRotate(t);
}
*/

