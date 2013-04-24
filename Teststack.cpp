#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
//Create a Stack
	Stack s;
	cout << s.empty();
//Push Elements
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
//Output Elements
	s.output();
	cout << "Output: " << endl;
//Pop Elements
	cout << "Pop: " << s.pop() << endl;
//Top Elements
	cout << "Top: " << s.top() << endl;	
	s.output();
}
