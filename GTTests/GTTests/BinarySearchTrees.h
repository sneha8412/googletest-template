#pragma once
#include <iostream>
#include <vector>
#include <iostream>
#include <stdlib.h>

struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

//create a new node on the heap
BstNode* GetNewNode();

BstNode* Insert();

void findNode();

std::vector<int> inorder();

std::vector<int> preorder();

std::vector<int> postorder();

int height();

std::vector<int> BreadthFirstSearch();