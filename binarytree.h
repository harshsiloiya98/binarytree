#ifndef _BINARYTREE_H_INCLUDED_
#define _BINARYTREE_H_INCLUDED_

#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

template<class T>
class binaryTree {
	struct Node {
		T data;
		Node *left;
		Node *right;
	};
	Node *createNode(T key) {
		Node *t = (Node *)malloc(sizeof(Node));
		t->data = key;
		t->left = NULL;
		t->right = NULL;
		return t;
	}
public:
	Node *root;
	binaryTree();
	~binaryTree();
	void preOrder();
	void postOrder();
	void inOrder();
	void insertNode(T val);
	int heightOfTree();
	void levelOrder();
	bool searchTree(T val);
	bool isEmpty();
};

#endif