#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int item) {
	int first, last, loc;
	first = 0;
	last = v.size()-1;
	
	for( ; ; ) {
		if(first > last)
			break;
		loc = (first + last)/2;
		
		if(item < v[loc])
			last = loc - 1;
		else if(item > v[loc])
			first = loc + 1;
		else 
			return loc;
	}
	return -1;
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(10);
	
	cout << "Find 1 " << binarySearch(v, 2) << endl;
	cout << "Find 100 " << binarySearch(v, 100) << endl;
}
