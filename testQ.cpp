#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{

	Queue q;
	cout << q.empty();
	q.removeQ();
	q.addQ(1);
	q.addQ(2);
	q.removeQ();
	cout << q.frontQ() << q.frontQ();

}
