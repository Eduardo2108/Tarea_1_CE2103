//
// Created by eduardo on 2/28/21.
//

#include "Collector.h"
#include "iostream"

using namespace std;

template<typename T>
Node<int> *Collector<T>::getNode(T value) {
    Node<T> *newElement;
    //If theres no address to recycle
    if (this->memoryManagement->len == 0) {
        /**> Memory assignment for the Node*/
        auto *dir = (Node<T> *) (malloc(sizeof(Node<T>)));

        /**> Creating the Node instance in the memory space assigned*/
        newElement = new(dir) Node<T>(value);
        cout << "Memory block allocated: " << &(*newElement) << "\n";
    } else {
        Node<T> *i = this->memoryManagement->getHead()->getValue();
        newElement = new(i)Node<T>(value);
        this->memoryManagement->delHead();
        cout << "Memory block recycled: " << &(*newElement) << "\n";

    }
    return newElement;

}

template<typename T>
void Collector<T>::recycleNode(Node<T> *pntrNode) {
    free(&(*pntrNode));

    //add the memory address to the list to recycle later.
    addDir(pntrNode);
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
    if (this->memoryManagement->getLen() == 0) {
        cout << "No memory available for recycling." << "\n";
    } else {
        cout << " - - - - - - - - Memory blocks for recycling - - - - - - - - " << "\n";
        for (int i = 0; i < this->memoryManagement->getLen(); ++i) {
            cout << "Address: " << this->memoryManagement->get(i) << "\n";
        }
        cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << "\n";

    }
}


template
class Collector<int>;
