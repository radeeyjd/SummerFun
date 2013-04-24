#pragma once
/* STACK Type = Int
   Capacity = 100*/
const int capacity = 100;
typedef int stackElement;

class Stack 
{
	private:
		stackElement stack[capacity];
		int stackTop;
		
	public:
		Stack();
		void push(stackElement);
		stackElement pop();
		stackElement top();
		bool empty();
		void deleteall();
		void output();
};

