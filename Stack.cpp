#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack()
{
	stackTop = -1;
}

bool Stack::empty()
{
	return (stackTop == -1);
}

void Stack::push(stackElement newVal)
{
	if(stackTop < capacity - 1)
	stack[++stackTop] = newVal;
	else
	std::cout << "Stack is full";
}

stackElement Stack::pop()
{
	if(stackTop >= 0)
	return stack[stackTop--];
	else 
	cout << "Stack is empty";
}

stackElement Stack::top()
{
	if(stackTop >= 0)
	return stack[stackTop];
	else
	cout << "Stack is empty";
}

void Stack::output()
{
	int index;
	index = stackTop;
	while(index >= 0)
	{
	cout << stack[index] <<endl;
	index--;
	}
}

void Stack::deleteall()
{
	stackTop = -1;
}
