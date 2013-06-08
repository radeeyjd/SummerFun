#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> x) {
	int smallpos, smallest;
	for(int i = 0; i < x.size() - 1; i++) {
		smallpos = i;
		smallest = x[i];
		for (int j = i + 1; j < x.size(); j++) {
			if(x[j] < smallest) {
				smallest = x[j];
				smallpos = j;
			}
		}
		x[smallpos] = x[i];
		x[i] = smallest;
	}
	for(int i = 0; i < x.size(); i++)
		cout << x[i] << " ";
	cout << endl;
}

int main() {
	vector<int> v;
	for(int i = 10; i > 0; i--)
		v.push_back(i);
	selectionSort(v);
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
