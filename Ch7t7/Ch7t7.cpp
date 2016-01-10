//Chapter 7 task 7 
//Имеется структура Tnode
//Требуется написать функцию для внедрения новых слов в дерево с узлами типа Tnode,
//функцию для вывода такого дерева

#include "Ch7t7.h"

TNode* root=NULL;
TNode* current=NULL;
int treeLength=0;

int main()
{
	TNode t2,t3,t4,t5,t6,t7,t1;
	t1 = { "aaa",100,0,0 };
	t2 = { "bbb",200,0,0 };
	t3 = { "ccc",300,0,0 };
	t4 = { "ddd",400,0,0 };
	t5 = { "eee",500,0,0 };
	t6 = { "fff",600,0,0 };
	t7 = { "ggg",700,0,0 };
	addNode(&t1);
	addNode(&t2);
	addNode(&t3);
	addNode(&t4);
	addNode(&t5);
	addNode(&t6);
	addNode(&t7);
	printTree(&t1, 1);
	std::cin.get();
	return 0;
}

bool addNode(TNode* tNode) {
	if (root != 0) {
		std::vector<int> path;
		std::vector<int>::iterator i;
		TNode* cur = root;
		for (int a = treeLength+1; a > 1; a/=2){
			i = path.begin();
			path.insert(i, a);
		}
		for (i = path.begin(); i != path.end(); i++) {
			if (*i % 2 == 0)
				if (cur->left != NULL)
					cur = cur->left;
				else
					cur->left = tNode;
			else
				if (cur->right != NULL)
					cur = cur->right;
				else
					cur->right = tNode;
		}
	}
	else 
		root = tNode;
	treeLength++;
	return false;
}

void printTree(TNode* tnode,int level) {
	TNode* cur = tnode;
	for (int i = 0; i < level;i++)
		std::cout << "-";
	std::cout << tnode->word<<'\n';

	if (tnode->left != NULL)
		printTree(tnode->left, level + 1);
	if (tnode->right != NULL)
		printTree(tnode->right, level + 1);
}
	
