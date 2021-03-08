//
// Created by eduardo on 2/28/21.
//

#include "Collector.h"

template<typename T>
Node<T> Collector<T>::getNode(T value) {
/*    TODO: check if theres any memory address in the list.
        Yes: create an instance of node in it
        NO: add a new node in a new memory address.*/
    return Node<T>(T());
}

template<typename T>
void Collector<T>::deleteNode(Node<T> *pntrNode) {
    /*
     * TODO: add the memory address to the list of memoryManagent
     *       use void free() for that memory address.
     */

}
