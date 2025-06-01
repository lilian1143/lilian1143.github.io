#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef char btdatatype;
typedef struct binarytreenode
{
	btdatatype _data;
	struct binarytreenode* _left;
	struct binarytreenode* _right;
}btnode;
void prevorder(btnode* root)
{
	if (root = NULL)
	{
		printf("NULL\n");
		return ;
	}
	printf("%c ", root->_data);
	prevorder(root->_left);
	prevorder(root->_right);
}
//int treesize(btnode* root)
//{
//	if (root == NULL)
//	{
//		return  0;
//	}
//	static int size = 0;
//	++size;
//	treesize(root->_left);
//	treesize(root->_right);
//	return size;
//}
//void  treesize(btnode* root,int* psize)
//{
//	if (root == NULL)
//	{
//		return  0;
//	}
//	else
//	(*psize)++;
//	static int size = 0;
//	treesize(root->_left);
//	treesize(root->_right);
//	return *psize;
//}
int treesize(btnode* root)
{
	if (root == NULL)
	{
		return  0;
	}
	else
		return 1 + treesize(root->_left) + treesize(root->_right);
}
int treeleafsize(btnode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;
	return treeleafsize(root->_left) + treeleafsize(root->_right);
}
btnode* createnode(int x)
{
	btnode* node =(btnode*) malloc(sizeof(btnode));
	node->_data = x;
	node->_left = NULL;
	node->_right = NULL;
	return node;                     
}
int main()
{
	btnode* A = createnode('A');
	btnode* B = createnode('B');
	btnode* C = createnode('C');
	btnode* D = createnode('D');
	btnode* E = createnode('E');
	A->_left = B;
	A->_right = C;
	B->_left = D;
	B->_right = E;
	prevorder(A);
	printf("\n");
	/*int sizea = 0;
	treesize(A,&sizea);
	printf("treesize:%d\n",sizea);*/
	printf("treesize:%d\n", treesize(A));
	printf("treesize:%d\n", treeleafsize(A));
	return 0;
}