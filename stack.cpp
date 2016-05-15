#include "stack.h"
#include <iostream>
using namespace std;

template <class T>
stack<T>::stack(){
	top = NULL;
}

template <class T>
void stack<T>::push(T new_element){
	Node<T> *new_node = new Node<T>;
	new_node -> element = new_element;
	new_node -> next = top;
	top = new_node;
	return;  
}


template <class T>
void stack<T>::pop(){
	Node<T>* temp = top;
	top = top->next;
	delete temp; 
	return;
}


template <class T>
void stack<T>::Stack_Printer(){

	Node<T> *temp = top;
	while(temp) // not NULL;
	{
		cout << temp->element<<endl;
		temp = temp -> next;
	}
	
	return;

}



