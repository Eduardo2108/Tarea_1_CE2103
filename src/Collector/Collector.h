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
    SLL<Node<T> **> *memoryManagement = new SLL<Node<T> **>;
public:
    Node<T> getNode(T value);

    void deleteNode(Node<T> *pntrNode);

/**
 * TODO: *crear lista SLL que reciba direcciones de memoria &(Node<T>)
 *       *crear algoritmo que encuentre una dirección de memoria para crear el objeto Node<T>
 *       *hacer un metodo que reciba un elemento tipo T y retorne un puntero que apunte a un objeto Node<T>
 */


    void addDir(Node<T> *&pntrNode);
};


#endif //TAREAEXTRA_1_CE2103_COLLECTOR_H
