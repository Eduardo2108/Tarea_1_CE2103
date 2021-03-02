//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_NODE_H
#define TAREAEXTRA_1_CE2103_NODE_H


#include "string"
#include <cstdio>
#include "iostream"


class Node {
public:
    Node(int value);

    int value;
    Node *next;

    int getValue() const;

    void setValue(int value);

    Node *getNext() const;

    void setNext(Node *next);
};

#endif //TAREAEXTRA_1_CE2103_NODE_H
