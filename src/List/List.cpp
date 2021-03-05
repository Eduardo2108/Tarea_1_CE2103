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

template<typename T>

std::ostream &operator<<(std::ostream &os, const List<T> &list) {
    os << "len: " << list.len << " head: " << list.head;
    return os;
}

