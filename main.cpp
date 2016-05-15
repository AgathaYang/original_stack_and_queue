#include <iostream>
#include "stack.h"
#include "queue.h"
using namespace std;

int main()
{
	stack a;
	cout<< "Push a b in a stack"<<endl;
	a.push('a');
	a.push('b');

	cout<< "The stack contain:";
	a.Stack_Printer();

	cout<< "Pop"<<endl;
	a.pop();

	cout<<"The stack contain:";
	a.Stack_Printer();

	queue b;
	cout<<"push a b in a queue"<<endl;
	b.push('a');
	b.push('b');
	
	cout << "The queue contain:";
	b.Stack_Printer();
	cout << "Pop"<<endl;
	b.pop();

	cout<< "The queue contain:";
	b.Stack_Printer();
	return 0;
}
