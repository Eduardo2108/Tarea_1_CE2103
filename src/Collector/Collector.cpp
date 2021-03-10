//
// Created by eduardo on 2/28/21.
//

#include "Collector.h"
#include "iostream"

using namespace std;

/**
 * @brief This method is used for the creation of Node<T> instances.
 * @tparam T generic type, must have "equal" operator.
 * @param value is the content of the node, used for the constructor.
 * @return An pointer to a new Instance of a Node, this instance will be assigned either to a new memory address or a
 * recycled one from the list.
 */
template<typename T>
Node<int> *Collector<T>::getNode(T value) {
    Node<T> *newElement;
    if (this->memoryManagement->len == 0) {
        //Memory assignment in a random address.
        auto *dir = (Node<T> *) (malloc(sizeof(Node<T>)));
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

/**>
 * @brief This methods adds a memory address to the recycling list.
 * @tparam T generic type, must have "equal" operator.
 * @param pntrNode pointer to the Node instance to recycle.
 */
template<typename T>
void Collector<T>::recycleNode(Node<T> *pntrNode) {
    //deallocate the memory address.
    free(&(*pntrNode));
    //add the memory address to the list to recycle later.
    if (this->memoryManagement == NULL) {
        this->memoryManagement = new SLL<Node<T> *>();
    }
    memoryManagement->append(pntrNode);
}

/**>
 * @brief This method prints the list of available memory addresses to recycle in the console
 * @tparam T generic type, must have "equal" operator.
 */
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

/**
 * @brief Templates for the proper work of the generic class, each data type used in the code, should be initialized here
 * for the code to compile.
 */
template
class Collector<int>;
