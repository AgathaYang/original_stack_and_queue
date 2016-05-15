#include <iostream>
#include "queue.h"
#include "stack.h"

queue::queue(){
	top = NULL;
}
void queue::pop()
{
	Node *temp=top;
	while(temp->next){
		temp = temp->next;
	}
	delete temp;
	return;
}
