#pragma once

#ifndef VALUE_H
#define VALUE_H

template<typename T>
class MyValue
{
private:
	T data;
public:
	MyValue(T data);
	void SetData(T data);
	T GetValue() const;
};

#include "MyValue.cpp"

#endif