#include <iostream>
#include "src/Node/Node.h"
#include "src/Collector//Simply linked list/SLL.h"
#include "src/Collector/Collector.h"
#include "src/List/List.h"

using namespace std;


int main(int argc, char *argv[]) {

    // 1- Crear instancia de List<>
    auto *lista = new List<int>();

    // 2- Agregar los valores 1, 2, 3 y 4.

    lista->append(1);
    lista->append(2);
    lista->append(3);

    // show list.
    lista->show();
    lista->getCollector().show();

    // 3- Eliminar el valor 2.
    lista->del(2);
    //show collector+
    lista->getCollector().show();
    //show list
    lista->show();


    // 4- Agregar el valor 5
    lista->append(5);
    lista->show();

    return 0;

}