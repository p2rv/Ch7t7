//Chapter 7 task 7 
//������� ��������� Tnode
//��������� �������� ������� ��� ��������� ����� ���� � ������ � ������ ���� Tnode,
//������� ��� ������ ������ ������,
//�������  ��� ������ ���� �� ������ ������ � ���������� ������� 

#include "Ch7t7.h"

TNode* root=NULL;
TNode* current=NULL;
int treeLength=0;

int main()
{
	std::cout << "ttest";
	std::cin.get();
	return 0;
}

bool addNode(TNode* tNode) {
	if (root != 0) {
		
	}
	else {
		root = tNode;
		current = root;
	}
	return false;
}

int getDepth(const int* treeLength){
	int depth = 1;
	int degree = 2;
	while (*treeLength/degree>0)
	{
		degree *= 2;
		depth++;
	}
	return depth;
}
