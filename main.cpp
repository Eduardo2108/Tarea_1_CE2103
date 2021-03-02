#include <iostream>
#include "src/Node/Node.h"
#include "src/Simply linked list/SLL.h"

using namespace std;

int main() {
    SLL *list = new SLL();

    list->append(1);
    list->append(2);
    list->append(3);

    list->show();

    return 0;
}
