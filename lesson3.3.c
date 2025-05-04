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
void listinit(listnode* phead)
{
	*pphead = buylistnode(0);
	(*pphead)->next = phead;
	(*pphead)->prev = phead;
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
}
void listpushback(listnode* phead, ltdatatype x)
{
                                                                                                            }                                                                                                                