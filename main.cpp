#include <iostream>
#include "src/Node/Node.h"
#include "src/Collector//Simply linked list/SLL.h"
#include "src/Collector/Collector.h"

using namespace std;

int main(int argc, char *argv[]) {
    auto *collector = new Collector<int>();
    Node<int> node = collector->getNode(777);
    node.show();
    return 0;

}