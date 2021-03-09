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

/**>
 * Method for deleting a Node of the list.
 * @tparam T Generic data type, must have equal operator.
 * @param element T type element to eliminate from the list.
 */
template<typename T>
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

/**>
 * Method for getting an element of the list given its position on a zero-based index.
 * @tparam T T Generic data type, must have equal operator.
 * @param i zero-based index of the element.
 * @return NULL if the index its out of bound, or the element.
 */
template<typename T>
T SLL<T>::get(int i) {
    if (i >= this->len) {
        return 0;
    }
    Node<T> *tmp = this->head;
    for (int j = 0; j < i; ++j) {

        tmp = tmp->getNext();

    }
    return tmp->getValue();
}

/**>
 * Method for deleting the first element of the list.
 * @tparam T Generic data type, must have equal operator.
 */
template<typename T>
void SLL<T>::delHead() {
    this->del(this->head->getValue());

}

template<typename T>
int SLL<T>::getLen() {
    return this->len;
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

/**
 * Templates for the proper work of the generic class, each data type used in the code, should be initialized here
 * for the code to compile.
 */
template
class SLL<int>;

template
class SLL<Node<int> *>;


