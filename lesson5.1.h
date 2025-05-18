#pragma once
#include<stdio.h>
typedef int hpdatatype;
typedef struct heap
{                                                 
	hpdatatype* _a;
	int _size;
	int _capacity;
}heap;
void heapsort(int* a, int n);
void heapinit(heap* php,hpdatatype* a,int n); 
void heapdestory(heap* php);
void heappush(heap* php,hpdatatype x);
void heappop(heap* php);
hpdatatype heaptop(heap* php);
int main()
{
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	heap hp;
	heapinit(&hp, a, sizeof(a) / sizeof(hpdatatype));
	return 0;
}