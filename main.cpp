#include <iostream>
#include "src/Node/Node.h"
#include "src/Collector//Simply linked list/SLL.h"
#include "src/Collector/Collector.h"
#include "src/List/List.h"

using namespace std;

int main(int argc, char *argv[]) {
    auto *lista = new List<int>();
    lista->append(1);
    lista->append(2);
    lista->append(3);

    lista->show();
    lista->del(1);
    lista->del(2);
    lista->del(3);


    lista->getCollector().show();

    return 0;

}