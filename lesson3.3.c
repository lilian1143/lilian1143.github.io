#include<stdio.h>
#include"lesson3.3.h"
listnode* buylistnode(ltdatatype x)
{
	listnode* node =(listnode*)malloc(sizeof(listnode));
	node->next = NULL;
	node->prev = NULL;
	node->data = x;
	return node;
}
//void listinit(listnode** pphead)
//{
//	*pphead = buylistnode(0);
//	(*pphead)->next = phead;
//	(*pphead)->prev = phead;
//	
//}
listnode* listinit()
{
	listnode* phead = buylistnode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void listprint(listnode* phead)
{
	assert(phead);
	listnode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void listpushback(listnode* phead, ltdatatype x)
{
	assert(phead);
	listnode* tail = phead->prev;
	listnode* newnode = buylistnode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}          
void listpopback(listnode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	listnode* tail= phead->prev;
	listnode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
	tail = NULL;
}
void listpushfront(listnode* phead, ltdatatype x)
{
	assert(phead);
	listnode* first = phead->next;
	listnode* newnode = buylistnode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}
void listpopfront(listnode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	listnode* first = phead->phead->next;
	listnode* second = first->next;
	phead->next = second;
	second->prev = phead;
	free(first);
}
listnode* listfind(listnode* phead, ltdatatype x)
{
	assert(phead);
	listnode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}
void listinsert(listnode* pos, ltdatatype x)
{
	assert(pos);
	listnode* posprev = pos->prev;
	listnode* newnode = buylistnode(x);
	posprev->next = newnode;
	newnode->prev = posprev;
	newnode->next = pos;
	pos->prev = newnode;
}
void listerase(listnode* pos)
{
	assert(pos);
	assert(pos != phead);
	listnode* posprev = pos->prev;
	listnode* posnext = pos->next;
	free(pos);
	posprev->next = posnext;
	posnext->prev = posprev;
}
void listclear(listnode* phead)
{
	assert(phead);
	listnode* cur = phead;
	while (cur != phead)
	{
		listnode* next = cur->next;
		free(cur);
		cur = next;
	}
	phead->next = phead;
	phead->prev = phead;
}
void listdestory(listnode** pphead)
{
	assert(*pphead);
	listclear(*pphead);
	free(*pphead);
	*pphead = NULL;
}