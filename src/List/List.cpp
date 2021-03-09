//
// Created by eduardo on 2/28/21.
//

#include "List.h"

using namespace std;

template<typename T>

int List<T>::getLen() const {
    return len;
}

template<typename T>

Node<T> *List<T>::getHead() const {
    return head;
}

template<typename T>
void List<T>::append(T element) {
    /**> Get the node object from the Collector instance.*/
    Node<T> *newElement = this->collector.getNode(element);

    if (this->head == nullptr) {
        this->head = this->tail = newElement;
    } else {
        this->tail->setNext(newElement);
        this->tail = newElement;
    }
    this->len += 1;

}

template<typename T>
void List<T>::show() {
    if (this->head == nullptr) {
        cout << "[]";
    } else {
        cout << "[";
        Node<T> *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getValue() << ", ";
            tmp = tmp->getNext();
        }
        cout << tmp->getValue() << "]" << "\n";
    }
}

template<typename T>
Collector<T> List<T>::getCollector() {
    return this->collector;
}

template<typename T>
void List<T>::del(T element) {
    if (element == this->head->getValue()) {
        Node<T> *tmp = this->head;
        this->head = this->head->getNext();
        this->collector.recycleNode(tmp);
        this->len--;
    } else {
        Node<T> *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            if (tmp->getNext()->getValue() == element) {
                Node<T> *tempDelete = tmp->getNext();
                tmp->setNext(tempDelete->getNext());
                this->collector.recycleNode(tempDelete);
                this->len--;
                return;
            } else {
                tmp = tmp->getNext();
            }
        }
        return;
    }

}

template
class List<int>;