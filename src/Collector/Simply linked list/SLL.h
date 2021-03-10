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
    Node<T> *head = nullptr; /*!< Head of the list.*/
    Node<T> *tail = nullptr;/*!< Length of the list.*/

    SLL();

    int len = 0;

    Node<T> *getHead() const;

    void del(T element);

    void append(T element);

    void show() const;

    T get(int i);

    void delIndex(int index);

    void delHead();

    int getLen();
};


#endif //TAREAEXTRA_1_CE2103_SLL_H
