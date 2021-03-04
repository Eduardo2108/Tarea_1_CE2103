//
// Created by eduardo on 2/28/21.
//

#include "List.h"

template<typename T>

int List<T>::getLen() const {
    return len;
}

template<typename T>

Node<T> *List<T>::getHead() const {
    return head;
}

