#pragma once

#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include <stdexcept>

template<typename T>
class Queue
{
private:
	Node<T>* first;
	Node<T>* last;
	size_t size;
public:
	Queue();
	void Enqueue(MyValue<T> myValue);
	MyValue<T> GetFirst() const;
	void Dequeue();
	~Queue();
};

#include "Queue.cpp"

#endif