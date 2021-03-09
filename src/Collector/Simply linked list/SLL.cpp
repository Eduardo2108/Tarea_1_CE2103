//
// Created by eduardo on 3/1/21.
//

#include "SLL.h"
#include "iostream"

using namespace std;

template<typename T>

/**>
 * Method used for adding an element to the end of the list.
 * @param element: Type int object
 */
void SLL<T>::append(T element) {
    /**> Memory assignment for the Node*/
    auto *newElement = (Node<T> *) (malloc(sizeof(Node<T>)));
    /**> Creating the Node instance in the memory space assigned*/
    newElement = new(newElement) Node<T>(element);


    if (this->head == nullptr) {
        this->head = this->tail = newElement;
    } else {
        this->tail->setNext(newElement);
        this->tail = newElement;
    }
    this->len += 1;
}

template<typename T>

/**>
 * Method for showing the list on the console.
 */
void SLL<T>::show() const {
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
//TODO: comment this method for documentation.
void SLL<T>::del(T element) {
    if (element == this->head->getValue()) {
        this->head = this->head->getNext();
        this->len--;
    } else {
        Node<T> *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            if (tmp->getNext()->getValue() == element) {
                tmp->setNext(tmp->getNext()->getNext());
                this->len--;
                return;
            } else {
                tmp = tmp->getNext();
            }
        }
    }

}

template<typename T>
T SLL<T>::get(int i) {
    Node<T> *tmp = this->head;
    for (int j = 0; j < i; ++j) {

        tmp = tmp->getNext();

    }
    return tmp->getValue();
}

template<typename T>
void SLL<T>::delIndex(int index) {
    this->del(this->get(index));

}

template<typename T>
Node<T> *SLL<T>::getHead() const {
    return head;
}

template<typename T>
SLL<T>::SLL() {
    this->head = NULL;
    this->len = 0;
    this->tail = NULL;
}

template
class SLL<int>;

template
class SLL<Node<int> *>;


