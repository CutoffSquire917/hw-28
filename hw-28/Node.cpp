#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"

template<typename T>
Node<T>::Node(MyValue<T> myValue) : myValue(myValue), next(nullptr) {}

template<typename T>
MyValue<T> Node<T>::GetData() const {
	return myValue;
}
template<typename T>
void Node<T>::SetData(MyValue<T> myValue) {
	this->myValue = myValue;
}
template<typename T>
Node<T>* Node<T>::GetNext() const
{
	return next;
}
template<typename T>
void Node<T>::SetNext(Node<T>* next) {
	this->next = next;
}

#endif