//
// Created by eduardo on 3/1/21.
//

#ifndef TAREAEXTRA_1_CE2103_SLL_H
#define TAREAEXTRA_1_CE2103_SLL_H


#include "../Node/Node.h"

class SLL {
public:
    Node *head;
    Node *tail;
    int len;

    void append(int element);

    void show() const;
};


#endif //TAREAEXTRA_1_CE2103_SLL_H
