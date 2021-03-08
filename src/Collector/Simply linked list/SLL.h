//
// Created by eduardo on 3/1/21.
//

#ifndef TAREAEXTRA_1_CE2103_SLL_H
#define TAREAEXTRA_1_CE2103_SLL_H


#include <ostream>
#include "../../Node/Node.h"

template<typename T>

class SLL {
public:
    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;

    SLL();

    int len = 0;

    Node<T> *getHead() const;

    void del(T element);

    void append(T element);

    void show() const;

    T get(int i);

    void delIndex(int index);
};


#endif //TAREAEXTRA_1_CE2103_SLL_H
