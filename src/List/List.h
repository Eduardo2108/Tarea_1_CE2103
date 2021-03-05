//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_LIST_H
#define TAREAEXTRA_1_CE2103_LIST_H


#include <ostream>
#include "../Node/Node.h"

template<typename T>
class List {
public:
    int len;
    Node<T> *head;

    int getLen() const;

    friend std::ostream &operator<<(std::ostream &os, const List &list);

    Node<T> *getHead() const;


};


#endif //TAREAEXTRA_1_CE2103_LIST_H
