#pragma once

#include <iostream>
#include <string>

struct TNode
{
	std::string word;
	int count;
	TNode* left;
	TNode* right;
};

bool addNode(TNode* tNode);
void printNode(TNode* tNode);
void printSortNode(TNode* tNode);
int getDepth(const int* treeLength);