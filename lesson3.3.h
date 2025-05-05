#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          >
typedef  int ltdatatype;
typedef struct listnode
{
	struct listnode* next;
	struct listnode* prev;
	int data;
}listnode;
//void listinit(listnode** pphead);
listnode* listinit();
listnode* buylistnode(ltdatatype x);
void listpushback(listnode* phead, ltdatatype x);
void listprint(listnode* phead);
void listpopback(listnode* phead);
void listpushfront(listnode* phead, ltdatatype x);
void listpopfront(listnode* phead);
listnode* listfind(listnode* phead, ltdatatype x);
void listinsert(listnode* pos, ltdatatype x);
void listerase(listnode* pos);
void listdestory(listnode* phead);
void listclear(listnode** pphead);