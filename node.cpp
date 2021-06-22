#include <iostream>
#include "node.h"
#include <utility>

template <class Type>
Node<Type> * Node<Type>::montaNode(Type *obj)
{
    Node<Type> *novo = new Node<Type>;

    if(novo)
    {
        novo->next=0;
        novo->obj=*obj;
    }
    return novo;
}

template <class Type>
void Node<Type>::desmontaNode(Node<Type> *x, Type *obj)
{
    if(x)
    {
        *obj=x->obj;
        delete x;
    }
}

template class Node<int>;
template class Node<float>;
template class Node<double>;
template class Node<long>;
template class Node<std::string>;
template class Node<char>;
template class Node<bool>;