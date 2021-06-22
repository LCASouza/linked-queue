#include <iostream>
#include "queue.h"
#include "node.h"
#include <utility>

template <class Type>
Queue<Type>::Queue(){
    head=tail=nullptr;
    n = 0;
}

template <class Type>
Queue<Type>::~Queue(){
    this->clear();
}

template <class Type>
bool Queue<Type>::push(Type *obj){
    Node<Type> *p = Node<Type>::montaNode(obj);

    if (!p){
        return false;
    }
    
    if(head){
        tail->next=p;
    }
    else{
        head=p;
    }

    tail=p;
    p->next=nullptr;
    n++;

    return true;
}

template <class Type>
bool Queue<Type>::pop(Type *obj){
    Node<Type> *p;
    if(head)
    {
        p=head;
        head=p->next;
        Node<Type>::desmontaNode(p, obj);

        if(!head)
            tail=nullptr;
        n--;
        return true;
    }
    return false;
}

template <class Type>
bool Queue<Type>::front(Type *obj){
    if(head){
        *obj = head->obj;
        return true;
    }
    return false;
}

template <class Type>
bool Queue<Type>::back(Type *obj){
    if(head){
        *obj = tail->obj;
        return true;
    }
    return false;
}

template <class Type>
bool Queue<Type>::isEmpty(){
    return !head;
}

template <class Type>
void Queue<Type>::clear(){
    Node<Type> *p;

    while(head){
        p = head;
        head = head->next;
        delete p;
    }

    n = 0;
    head=tail=nullptr;
}

template <class Type>
void Queue<Type>::printElements(){
    std::cout << n;
}

template <class Type>
int Queue<Type>::getElements(){
    return n;
}

template class Queue<int>;
template class Queue<float>;
template class Queue<double>;
template class Queue<long>;
template class Queue<std::string>;
template class Queue<char>;
template class Queue<bool>;