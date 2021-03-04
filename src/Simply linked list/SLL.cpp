//
// Created by eduardo on 3/1/21.
//

#include "SLL.h"
#include "iostream"

using namespace std;

template<typename T>

/**
 * Method used for adding an element to the end of the list.
 * @param element: Type int object
 */
void SLL<T>::append(T element) {
    Node<T> *newElement;
    newElement = (new Node<T>(element));
    if (this->head == nullptr) {
        this->head = this->tail = newElement;
    } else {
        this->tail->setNext(newElement);
        this->tail = newElement;
    }
    this->len += 1;
    cout << "Added : " << newElement->getValue() << " to the list on pos: " << len - 1 << "\n";
}

template<typename T>

/**
 * Method for showing the list on the console.
 */
void SLL<T>::show() const {
    if (this->head == nullptr) {
        cout << "[]";
    } else {
        cout << "[ ";
        Node<T> *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getValue() << ", ";
            tmp = tmp->getNext();
        }
        cout << tmp->getValue() << " ]";
    }
}

template
class SLL<int>;
