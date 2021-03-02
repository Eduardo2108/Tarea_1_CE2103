//
// Created by eduardo on 3/1/21.
//

#include "SLL.h"
#include "iostream"

using namespace std;


void SLL::append(int element) {
    Node *newElement = new Node(element);
    if (this->head == nullptr) {
        this->head = this->tail = newElement;
        this->len += 1;
        cout << "Added : " << newElement->getValue() << " to the head of the list on pos: " << len - 1 << "\n";
    } else {
        this->tail->setNext(newElement);
        this->tail = newElement;
        cout << "Added : " << newElement->getValue() << " to the end of the list on pos: " << len - 1 << "\n";
    }
    this->len += 1;
}

void SLL::show() const {
    if (this->head == nullptr) {
        cout << "Empty list...";
    } else {
        cout << "[ ";
        Node *tmp = this->head;
        for (int i = 0; i < (this->len - 2); ++i) {
            cout << tmp->getValue() << ", ";
            tmp = tmp->getNext();
        }
        cout << tmp->getValue() << " ]";
    }
}
