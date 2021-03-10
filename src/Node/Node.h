//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_NODE_H
#define TAREAEXTRA_1_CE2103_NODE_H


#include "string"
#include <cstdio>
#include "iostream"

template<typename T>
class Node {

public:
    explicit Node(T newValue);

    T value; /*!< Value stored in the node.*/
    Node *next;  /*!<Pointer to the next node in the list..*/

    bool operator==(const Node &rhs) const;

    bool operator!=(const Node &rhs) const;

    T getValue() const;

    void setValue(T newValue);

    Node *getNext() const;

    void setNext(Node *newNext);

    void show() const;
};

#endif //TAREAEXTRA_1_CE2103_NODE_H
