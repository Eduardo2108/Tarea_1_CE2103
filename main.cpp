#include <iostream>
#include "src/Node/Node.h"
#include "src/Simply linked list/SLL.h"

using namespace std;

int main(int argc, char *argv[]) {
    SLL<int> *lista = new SLL<int>();
    lista->append(1);
    lista->append(2);

    lista->append(3);

    lista->append(4);

    lista->append(5);

    lista->show();
    lista->del(6);
    lista->show();
    lista->del(3);
    lista->show();
    lista->del(5);
    lista->show();
    lista->del(2);
    lista->show();
    lista->del(4);
    lista->show();
}