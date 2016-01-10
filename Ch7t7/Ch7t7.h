#pragma once

#include <iostream>
#include <string>
#include <vector>

struct TNode{
	std::string word;
	int count;
	TNode* left;
	TNode* right;
};

bool addNode(TNode* tNode);
void printTree(TNode* tNode, int level);
TNode* fillTree();