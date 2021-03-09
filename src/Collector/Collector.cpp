//
// Created by eduardo on 2/28/21.
//

#include "Collector.h"
#include "iostream"

using namespace std;

template<typename T>
Node<int> * Collector<T>::getNode(T value) {
    Node<T> *newElement;
    //If theres no address to recycle
    if (this->memoryManagement->len == 0) {
        /**> Memory assignment for the Node*/
        auto *dir = (Node<T> *) (malloc(sizeof(Node<T>)));

        cout << "Memory block assigned: " << &(*dir) << "\n";
        /**> Creating the Node instance in the memory space assigned*/

        newElement = new(dir) Node<T>(value);
        cout << "Memory block used: " << &(*newElement) << "\n";

    } else {
        Node<T> *i = this->memoryManagement->getHead()->getValue();
        newElement = new(i)Node<T>(value);
    }
    return newElement;

}

template<typename T>
void Collector<T>::deleteNode(Node<T> *pntrNode) {
    //add the memory address to the list to recycle later.
    addDir(pntrNode);
    //free the memory address
    //free(*pntrNode);
}

template<typename T>
void Collector<T>::addDir(Node<T> *pntrNode) {
    if (this->memoryManagement == NULL) {
        this->memoryManagement = new SLL<Node<T> *>();
    }
    memoryManagement->append(pntrNode);
}

template<typename T>
void Collector<T>::show() {
    this->memoryManagement->show();

}


template
class Collector<int>;
