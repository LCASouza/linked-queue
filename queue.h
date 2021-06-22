#pragma once
#include <iostream>
#include "node.h"

template <class Type>
class Queue{
    private:
        Node<Type> *head, *tail;
        int n;//Quantidade de elementos na fila
    
    public:
        Queue();
        ~Queue();
        bool push(Type *obj);//Insere um elemento na fila
        bool pop(Type *obj);//Remove um elemento da fila
        bool front(Type *obj);//Retorna o primeiro elemento
        bool back(Type *obj);//Retorna o ultimo elemento
        bool isEmpty();//Retorna true para fila vazia, ou false para fila com elemento(s)
        void clear();//Limpa a fila completamente
        void printElements();//Imprime a quantidade de elementos
        int getElements();//Retorna a quantidade de elementos
};