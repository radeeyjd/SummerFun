#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList ll;
	cout << ll.empty() << endl;
	ll.addBeg(100);
	ll.addBeg(11);
	ll.addBeg(0);
	ll.addBeg(10);
	cout << ll.empty() << endl;
	ll.showlist();
	ll.deleteElement(10);
	ll.showlist();
}
