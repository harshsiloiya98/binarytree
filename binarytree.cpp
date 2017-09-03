#include "binarytree.h"

using namespace std;

template<class T>
binaryTree<T>::binaryTree() {
	root = NULL;
}

template<class T>
binaryTree<T>::~binaryTree() {
	delete root;
}

template<class T>
void binaryTree<T>::preOrder() {
	if (root != NULL) {
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

template<class T>
void binaryTree<T>::postOrder() {
	if (root != NULL) {
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}

template<class T>
void binaryTree<T>::inOrder() {
	if (root != NULL) {
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
}

template<class T>
void binaryTree<T>::insertNode(T val) {
	Node *ins = createNode(val);
	Node *trav = root;
	Node *p = NULL;
	if (root == NULL) {
		root = ins;
		return;
	}
	while (trav != NULL) {
		p = trav;
		if (val < trav->data)
			trav = trav->left;
		else
			trav = trav->right;
	}
	if (val < p->data)
		p->left = ins;
	else
		p->right = ins;
}

template<class T>
int binaryTree<T>::heightOfTree() {
	if (root == NULL)
		return 0;
	int lheight = heightOfTree(root->left);
	int rheight = heightOfTree(root->right);
	return (lheight > rheight ? lheight + 1 : rheight + 1);
}

template<class T>
void binaryTree<T>::levelOrder() {
	queue<Node *> q;
	q.push(root);
	while (true) {
		int count = q.size();
		if (count == 0)
			break;
		while (count > 0) {
			Node *n = q.front();
			q.pop();
			cout << n->data << " ";
			if (n->left != NULL)
				q.push(n->left);
			if (n->right != NULL)
				q.push(n->right);
			count--;
		}
	}
}

template<class T>
bool binaryTree<T>::searchTree(T val) {
	Node *trav = root;
    bool isFound = false;
    while (trav != NULL) {
        if (val < trav->data)
            trav = trav->left;
        else if (val > trav->data)
            trav = trav->right;
        else {
            isFound = true;
            break;
        }
    }
    return isFound;
}

template<class T>
bool binaryTree<T>::isEmpty() {
	if (root == NULL)
		return true;
	return false;
}