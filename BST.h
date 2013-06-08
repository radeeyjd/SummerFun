#pragma once
#include <iostream>
class BST {
	private:
		class BinNode {
			public:
			int data;
			BinNode *left, *right;
			BinNode() {
			left = right = NULL;
			}
			BinNode(int item) {
				data = item;
				left = right = NULL;
			}
		};
		BinNode *root;	
	public:
		BST() {
			root = NULL;
		}
		bool empty() {
			return root == NULL;
		}
		int insert(int item);
		int search(int item);
		int deleteItem(int item);
};
			
int BST::insert(int item) {
	BinNode *locptr, *parent;
	locptr = root;
	parent = NULL;
	bool found = false;

	for( ; ; ) {
		if(found || locptr == NULL)
			break;
		parent = locptr;
		if(item < locptr->data)
			locptr = locptr->left;
		else if(item > locptr->data)
			locptr = locptr->right;
		else
			found = true;	
	}
	
	if(found)
		return -1;
	else {
		locptr = new BinNode(item);
		if(parent == NULL)
			root = locptr;
		else if(item < parent->data)
			parent->left = locptr;
		else
			parent->right = locptr;
	}
	return 0;		
}

int BST::search(int item) {
	BinNode *locptr;
	locptr = root;
	for( ; ;) {
		if(locptr == NULL)
			return -1;
		if(item < locptr->data)
			locptr = locptr->left;
		else if(item > locptr->data)
			locptr = locptr->right;
		else
			return 1;
	}
		
}

int BST::deleteItem(int item) {
	BinNode *x, *parent;
	
	x = root;
	parent = NULL;
	
	for( ; ; ) {
		if(x == NULL)
			return -1;
		if(item < x->data) {
			parent = x;
			x = x->left;
		}
		else if(item > x->data) {
			parent = x;
			x = x->right;
		}
		else
			break;
	}

	if(x->left != NULL && x->right != NULL) {
		BinNode *xSucc;
		xSucc = x->right;
		parent = x;
		while(xSucc->left != NULL) {
			parent = xSucc;
			xSucc = xSucc->left; 
		}

		x->data = xSucc->data;
		x = xSucc;
	}

	BinNode *subtree;
	subtree = x->left;
	if(subtree == NULL)
		subtree = x->right;
	if(parent == NULL)
		root = subtree;
	else if(parent->left == x)
		parent->left = subtree;
	else
		parent->right = subtree;
		delete x;
}
	
			
