#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> x) {
	int key;
	for(int i = 1; i < x.size(); ++i) {
		key = x[i];
		int j ;
		for(j = i;(key < x[j-1]) && (j > 0); --j)
		{	
			x[j] = x[j-1];
		}
		x[j] = key;
	}
	for(int i = 0; i < x.size(); i++)
		cout << x[i] << " ";
	cout << endl;
}

int main() {
	vector<int> v;
	for(int i = 10; i > 0; i--)
		v.push_back(i);
	insertionSort(v);
}
