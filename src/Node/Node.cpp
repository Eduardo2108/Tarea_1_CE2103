//
// Created by eduardo on 2/28/21.
//
#include "iostream"
#include "Node.h"

using namespace std;

template<typename T>

/**
 * Get for the value stored in the node.
 * @return Integer object.
 */
T Node<T>::getValue() const {
    return value;
}

template<typename T>

/***
 * Method for storing a new newValue on the node.
 * @param newValue: Integer object.
 */
void Node<T>::setValue(T newValue) {
    Node::value = newValue;
}

template<typename T>

/**
 * Get for the pointer stored in the node, pointing to the next node in the list.
 * @return Pointer to next, nullptr if none.
 */
Node<T> *Node<T>::getNext() const {
    return next;
}

template<typename T>

/**
 * Set for the newNext pointer.
 * @param newNext: pointer to a node.
 */
void Node<T>::setNext(Node<T> *newNext) {
    Node::next = newNext;
}

template<typename T>

/**
 * Constructor for the node.
 * @param newValue: Integer newValue thats going to be stored in the node.
 */
Node<T>::Node(T newValue) {
    this->value = newValue;

}

template<typename T>
bool Node<T>::operator==(const Node &rhs) const {
    return value == rhs.value;
}

template<typename T>
bool Node<T>::operator!=(const Node &rhs) const {
    return !(rhs == *this);
}

template<typename T>
void Node<T>::show() const {

    cout << "Node value: " << this->value << "\n";
}

template
class Node<int>;

template
class Node<Node<int> *>;