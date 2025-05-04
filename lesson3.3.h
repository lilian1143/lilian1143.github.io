#pragma once
typedef  int ltdatatype;
struct listnode
{
	struct listnode* next;
	struct listnode* prev;
	int data;
};
void listpushback(listnode* phead, ltdatatype x);