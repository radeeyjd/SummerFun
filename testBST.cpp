#include <iostream>
#include "BST.h"
using namespace std;

int main() {
	BST btree;
	cout << btree.insert(50);
	cout << btree.insert(1);
	cout << btree.insert(100);
	cout << btree.insert(1);
	cout << "Search: " << endl;
	cout <<"1: " << btree.search(22) << endl;
	cout <<"-1: " << btree.search(99) << endl;
	}
