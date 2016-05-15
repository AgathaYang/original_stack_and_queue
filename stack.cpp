#include "stack.h"
#include <iostream>
using namespace std;
stack::stack(){
	top=NULL;
}

void stack::push(char new_element){
	Node *new_node = new Node;
	new_node -> element = new_element;
	new_node -> next = top;
	top = new_node;
	return;  
}

void stack::pop(){
	Node *temp = top;
	top = top->next;
	delete temp; 
	return;
}

void stack::Stack_Printer(){

	Node *temp = top;
	while(temp) // not NULL;
	{
		cout << temp->element<<endl;
		temp = temp -> next;
	}
	
	return;

}



