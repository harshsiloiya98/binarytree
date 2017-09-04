# binarytree
Made by: Harsh Siloiya
harshsiloiya@gmail.com

**NOTE** : This header file is still under construction, hence while using it, some errors will occur. However, you are free to debug or experiment with it however you like.

This class is made to represent a standard binary tree, which can be implemented as a standard template library in C++. To include this header, write `#include "binarytree.h"` while including the rest of your header files.

To run a C++ program implementing this particular header file, you can either :-

* Use the MAKEFILE provided. (Put the MAKEFILE in the target folder and type `make` in the terminal while present in the particular directory.
If you use this method, be sure to make the necessary changes in the MAKEFILE too. (The documentation is provided in the MAKEFILE which will guide you to make the changes neccessary)
* Type in terminal - `g++ binarytree.cpp yourfilename.cpp -std=c++11`

### Member data types (private)
Struct Node
- structure definition for a node of a binary tree.

### Member functions provided by class binaryTree

Function Name | Function Description
--------------|---------------------
(constructor) | construct binaryTree object         
(destructor) | binaryTree destructor
operator= | yet to be implemented
preOrder | prints the elements of the binary tree in a preorder fashion
postOrder | prints the elements of the binary tree in a postorder fashion
inOrder | prints the elements of the binary tree in an inorder fashion
isEmpty | returns boolean value depending on whether the binary tree is empty or not
insertNode | inserts a node in the binary tree object
heightOfTree | returns the height (node-wise) of the binary tree object
levelOrder | prints the nodes of the binary tree level-wise
searchTree | searches for a particular element in a binary tree and returns a boolean value
createNode (private) | creates a node, given data
