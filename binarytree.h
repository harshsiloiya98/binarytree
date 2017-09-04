#ifndef _BINARYTREE_H_INCLUDED_
#define _BINARYTREE_H_INCLUDED_

template<class T>
class binaryTree {
	struct Node {
		T data;
		Node *left;
		Node *right;
	};
	Node *createNode(T key);
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