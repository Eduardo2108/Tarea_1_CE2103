#include <iostream>
#include "src/Node/Node.h"

int main() {
    Node third = Node(nullptr, 3);
    Node second = Node(&third, 2);
    Node first = Node(&second, 1);
    return 0;
}
