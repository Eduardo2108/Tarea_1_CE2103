//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_COLLECTOR_H
#define TAREAEXTRA_1_CE2103_COLLECTOR_H


#include "Simply linked list/SLL.h"
#include "../Node/Node.h"

template<typename T>

class Collector {
private:
    SLL<Node<T> *> *memoryManagement = new SLL<Node<T> *>;

    void addDir(Node<T> *pntrNode);

public:

    Node<int> *getNode(T value);

    void recycleNode(Node<T> *pntrNode);

    void show();
};


#endif //TAREAEXTRA_1_CE2103_COLLECTOR_H
