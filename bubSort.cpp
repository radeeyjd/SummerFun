#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> x) {
	int numofpairs = x.size() - 1;
	int last;
	do {
		last = 0;	//to skip next rounds if array is already sorted
		for(int i = 0; i <= numofpairs; i++) {
			if(x[i] > x[i+1]) {
				int temp = x[i+1];
				x[i+1] = x[i];
				x[i] = temp;
				last = i; //to stop swapping if the array is sorted 
			}
		}
	numofpairs = last - 1;
	}while(numofpairs >= 0);	
	for(int i = 0; i < 10 ; i++)
		cout << x[i] << " ";
		cout << endl;
}

int main() {
	vector<int> v;
	for(int i = 10; i > 0; i--)
		v.push_back(i);
	bubbleSort(v);
}
