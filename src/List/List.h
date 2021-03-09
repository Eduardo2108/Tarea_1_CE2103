//
// Created by eduardo on 2/28/21.
//

#ifndef TAREAEXTRA_1_CE2103_LIST_H
#define TAREAEXTRA_1_CE2103_LIST_H


#include <ostream>
#include "../Node/Node.h"
#include "../Collector/Collector.h"

template<typename T>
class List {
private:
    int len;
    Node<T> *head;
    Node<T> *tail;
    Collector<T> collector;
public:
    void append(T element);

    void show();

    void del(T element);

    int getLen() const;

    Node<T> *getHead() const;


    Collector<T> getCollector();
};


#endif //TAREAEXTRA_1_CE2103_LIST_H
