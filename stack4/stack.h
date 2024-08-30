#ifndef STACK_H
#define STACK_H
#include "array.h"

template <typename T>
class Stack
{
private:
	static const int STACKSIZE;		//전역변수인데 클래스랑 연관있어서 스태틱으로 씀

	Array<T> arr_;		// 'as-a'
	int tos_;
	
	Stack(const Stack<T>& );
	Stack<T>& operator=(const Stack<T>& );

public:
	explicit Stack(int size = STACKSIZE);               //명시적인 main - 7번 못쓰게한다
	//~Stack();					

	void push(const T& data);
	const T pop();

	bool isFull() const;
	bool isEmpty() const;
	
};

#include <cassert>

template <typename T>
const int Stack<T>::STACKSIZE = 100;

template <typename T>
Stack<T>::Stack(int size)
: arr_(size), tos_(0)
{
	
}

template <typename T>
void Stack<T>::push(const T& data)
{
	assert(!isFull());

	arr_[tos_] = data;
	++tos_;
}

template <typename T>
const T Stack<T>::pop()
{
	assert(!isEmpty());

	--tos_;
	return arr_[tos_];
}

template <typename T>
bool Stack<T>::isFull() const
{
	return tos_ == arr_.size();
}

template <typename T>
bool Stack<T>::isEmpty() const
{
	return tos_ == 0;
}

#endif
