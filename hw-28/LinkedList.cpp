#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr), size(0) {}

template<typename T>
size_t LinkedList<T>::GetSize() const
{
	return size;
}

template<typename T>
void LinkedList<T>::InsertAtEnd(MyValue<T> value)
{
	if (head == nullptr)
	{
		InsertAtBeginning(value);
		return;
	}
	Node<T>* newNode = new Node<T>(value);
	Node<T>* temp = head;
	while (temp->GetNext() != nullptr) {
		temp = temp->GetNext();
	}
	temp->SetNext(newNode);
	size++;
}

template<typename T>
void LinkedList<T>::InsertAtBeginning(MyValue<T> value) {
	Node<T>* newNode = new Node<T>(value);
	newNode->SetNext(head);
	head = newNode;
	size++;
}

template<typename T>
void LinkedList<T>::DeleteAtBeginning() {
	if (head == nullptr) {
		return;
	}
	else if (head->GetNext() == nullptr) {
		delete head;
		size--;
		return;
	}
	Node<T>* temp = head;
	head = head->GetNext();
	delete temp;
	size--;
}

template<typename T>
LinkedList<T>::~LinkedList() {
	while (head != nullptr) {
		Node<T>* temp = head;
		head = head->GetNext();
		delete temp;
	}
}

#endif