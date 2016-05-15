#ifndef stack_H
#define stack_H

#include <iostream>
struct Node{
	char element;
	Node* next;
};

class stack{

public:
	stack();
	void push(char new_element);
	virtual void pop();
	void Stack_Printer();
protected:
	Node *top;

};


#endif
