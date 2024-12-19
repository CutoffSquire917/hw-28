#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.h"

template<typename T>
Queue<T>::Queue() : first(nullptr), last(nullptr), size(0) {}

template<typename T>
void Queue<T>::Enqueue(MyValue<T> myValue) {
	Node<T>* newNode = new Node<T>(myValue);
	if (last == nullptr) {
		first = newNode;
		last = newNode;
	}
	else {
		last->SetNext(newNode);
		last = newNode;
	}
	size++;
}

template<typename T>
MyValue<T> Queue<T>::GetFirst() const {
	if (first == nullptr)
	{
		throw std::runtime_error("Queue is empty!");
	}
	return first->GetData();
}

template<typename T>
void Queue<T>::Dequeue() {
	if (first == nullptr) {
		throw std::runtime_error("Queue is empty!");
	}
	Node<T>* temp = first;
	first = first->GetNext();
	if (first == nullptr) {
		last = nullptr;
	}
	delete temp;
	size--;
}

template<typename T>
Queue<T>::~Queue() {
	while (first != nullptr) {
		Node<T>* temp = first;
		first = first->GetNext();
		delete temp;
	}
	last = nullptr;
}

#endif