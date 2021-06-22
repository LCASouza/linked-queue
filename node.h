#pragma once

template <class Type>
class Node{
    public:
        Type obj;//Dado que será armazenado dentro do Node
        Node *next;//Ponteiro para o próximo node

        static Node<Type>* montaNode(Type *obj);
        static void desmontaNode(Node<Type> *x, Type *obj);
};