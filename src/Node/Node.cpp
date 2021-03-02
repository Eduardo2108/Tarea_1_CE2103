//
// Created by eduardo on 2/28/21.
//
#include "iostream"
#include "Node.h"

using namespace std;

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node::Node(int value) {
    this->value = value;

}
