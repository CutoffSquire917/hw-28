#pragma once

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <stdexcept>

template<typename T>
class LinkedList {
private:
	Node<T>* head;
	size_t size;
public:
	LinkedList();
	size_t GetSize() const;
	void InsertAtEnd(MyValue<T> value);
	void InsertAtBeginning(MyValue<T> value);
	void DeleteAtBeginning();
	~LinkedList();
};

#include "LinkedList.cpp"

#endif