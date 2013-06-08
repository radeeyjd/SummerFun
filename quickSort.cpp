#include <iostream>
#include <vector>
using namespace std;

void split(vector<int> &x, int first, int last, int &pos) {
	int left = first,
		right = last;
	int pivot = x[left];

	while(left < right) {
		while(x[right] > pivot)
			--right;
		while((left < right) && (x[left] <= pivot))
			++left;
		if(left < right) {
			int temp = x[left];
			x[left] = x[right];
			x[right] = temp;
		}
	}
	
	pos = right;
	x[first] = x[pos];		
	x[pos] = pivot;
}

void quickSort(vector<int> &x, int first, int last) {
	int pos;
	if(first < last) {
		split(x, first, last, pos);
		quickSort(x, first, pos-1);
		quickSort(x, pos+1, last);
	}
}

int main() {
	vector<int> v;
	for(int i = 10; i > 0; --i)
		v.push_back(i);
	quickSort(v, 0, v.size()-1);
	for(int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
		
}
