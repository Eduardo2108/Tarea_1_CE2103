//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_NODE_H
#define TAREAEXTRA_1_CE2103_NODE_H


#include "../Collector/Collector.h"
#include "string"
#include <cstdio>
#include "iostream"

/**
 * Class for the node of a simple linked list.
 */
class Node {
private:

    Node *next; /**< Pointer to the next node in the list, if its the last node, points to null.  */
    int value; /**< Value stored in the node. */


public:
    /**
     * Method for printing the value stored in the node and the memory address of the next node.
     */
    void
    show() {
        std::string s = std::to_string(value);


        std::cout
                << " |Value: " << s << "| Next: " << next <<
                std::endl;

    }

    /**
     * Get method for the pointer to the next node.
     * @return Memory address of the next node.
     */
    Node *getNext() const {
        return next;
    }

    Node() {}

    /**
     * Method for changing the value of the next pointer
     * @param next memory address
     */
    void setNext(Node *next) {
        Node::next = next;
    }

    /**
     * Method for getting the value stored in the node.
     * @return
     */
    int getValue() const {
        return value;
    }

    /**
     * Method for setting the value stored in the node.
     * @param value
     */
    void setValue(int value) {
        Node::value = value;
    }
};


#endif //TAREAEXTRA_1_CE2103_NODE_H
