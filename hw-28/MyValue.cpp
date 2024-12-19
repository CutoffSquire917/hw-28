#ifndef VALUE_CPP
#define VALUE_CPP

#include "MyValue.h"

template<typename T>
MyValue<T>::MyValue(T data)
{
	this->data = data;
}
template<typename T>
void MyValue<T>::SetData(T data)
{
	this->data = data;
}
template<typename T>
T MyValue<T>::GetValue() const {
	return data;
}

#endif