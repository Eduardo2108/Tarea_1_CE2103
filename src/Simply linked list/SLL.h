//
// Created by eduardo on 3/1/21.
//

#ifndef TAREAEXTRA_1_CE2103_SLL_H
#define TAREAEXTRA_1_CE2103_SLL_H


#include "../Node/Node.h"

template<typename T>

class SLL {
public:
    Node<T> *head;
    Node<T> *tail;
    int len;

    void append(T element);

    void show() const;
};


#endif //TAREAEXTRA_1_CE2103_SLL_H
