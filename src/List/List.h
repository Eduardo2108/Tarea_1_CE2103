//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_LIST_H
#define TAREAEXTRA_1_CE2103_LIST_H


#include "../Node/Node.h"

class List {
public:
    int len;
    Node *head;

    int getLen() const;

    void setLen(int len);

    Node *getHead() const;

    void setHead(Node *head);
};


#endif //TAREAEXTRA_1_CE2103_LIST_H
