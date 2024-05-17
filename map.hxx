//
// Created by Ioann Marzan on 04.05.2024.
//

#ifndef BALANCED_BINARY_TREE_MAP_HXX
#define BALANCED_BINARY_TREE_MAP_HXX

#include <stdint.h>
#include "node.hxx"

namespace custom {

    template<class valtype>
    class map {
        custom::node<valtype>* parent;
        intmax_t size;

    };

} // custom

#endif //BALANCED_BINARY_TREE_MAP_HXX
