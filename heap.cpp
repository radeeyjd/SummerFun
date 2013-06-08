#include <iostream>
#include <vector>
using namespace std;

int size;

void bubbledown(vector<int> &x, int r) {
	for(int c = (2*r + 1); c < size; ) {
		if((c < (size - 1)) && (x[c] < x[c+1])) {
			c++;
		}
		if(x[c] > x[r]) {
			int temp = x[c];
			x[c] = x[r];
			x[r] = temp;
			r = c;
			c = 2*r + 1;
		}
		else
			break;
	}
}

void heapify(vector<int> &x) {
	for(int r = (size - 1)/2; r >= 0; r--) {
		bubbledown(x, r);
	}
}

void heapSort(vector<int> &x) {
	while(size > 0) {
		int temp = x[0];
		x[0] = x[size - 1];
		x[size - 1] = temp;
		--size;
		bubbledown(x, 0);
	}	
}

int main() {
	vector<int> v;
	v.push_back(35);
	v.push_back(15);
	v.push_back(77);
	v.push_back(60);
	v.push_back(22);
	v.push_back(41);
	size = v.size();
	heapify(v);	
	heapSort(v);
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}
