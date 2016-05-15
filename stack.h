#ifndef stack_H
#define stack_H

#include <iostream>
template <class T>
struct Node{
	T element;
	Node<T> * next;
};
template <class T>
class stack{

public:
	stack();
	void push(T new_element);
	virtual void pop();
	void Stack_Printer();
protected:
	Node<T> *top;

};


#endif
