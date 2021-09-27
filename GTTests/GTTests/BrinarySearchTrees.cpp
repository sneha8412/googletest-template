#include "BinarySearchTrees.h"
#include <iostream>
#include <vector>
//using namespace std;//bad practice
//rename the namespace  using directives
#include <stdlib.h>



//create a newNode in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}


// To insert data in BST -  returns address of root node
BstNode* Insert(BstNode * root, int data){
	if (root == NULL) {
		root = GetNewNode(data);
	}
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}
	return root;
}


void findNode() {

}


std::vector<int> inorder() {

}

std::vector<int> preorder() {


}

std::vector<int> postorder() {
	
}

int height() {

}

std::vector<int> BreadthFirstSearch() {

}