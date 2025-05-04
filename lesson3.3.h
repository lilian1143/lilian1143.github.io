#pragma once
#include<stdio.h>
#include<assert.h>
#include<                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          >
typedef  int ltdatatype;
typedef struct listnode
{
	struct listnode* next;
	struct listnode* prev;
	int data;
}listnode;
void listinit(listnode** pphead);
listnode* buylistnode(ltdatatype x);
void listpushback(listnode* phead, ltdatatype x);
void listprint(listnode* phead);
void listpopback(listnode* phead);