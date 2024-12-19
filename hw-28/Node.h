#pragma once

#ifndef NODE_H
#define NODE_H

#include "MyValue.h"

template<typename T>
class Node
{
private:
    MyValue<T> myValue;
    Node<T>* next;
public:
    Node(MyValue<T> myValue);
    MyValue<T> GetData() const;
    void SetData(MyValue<T> myValue);
    Node<T>* GetNext() const;
    void SetNext(Node<T>* next);
};

#include "Node.cpp"

#endif