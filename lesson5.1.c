#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lesson5.1.h"
void swap(hpdatatype* p1, hpdatatype* p2)
{
	hpdatatype tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void adjust(hpdatatype* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child<n)
	{
		if (child+1<n&&a[child + 1] < a[child])
		{
			++child;
		}
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void adjust(hpdatatype* a, int n, int child)
{
	int parent = (child - 1) / 2;
	while (child>0)
	{
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void heapinit(heap* php, hpdatatype* a, int n)
{
	php->_a =(hpdatatype*) malloc(sizeof(hpdatatype) * n);
	memcpy(php->_a, a, sizeof(hpdatatype) * n);
	php->_size = n;
	php->_capacity = n;
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		adjustdown(php->_a, php->_size, i);
	}
}
void heapdestory(heap* php)
{
	assert(php);
	free(php);
	php->_a = NULL;
	php->_capacity = php->_size = 0;
}
void heappush(heap* php, hpdatatype x)
{
	assert(php);
	if (php->_size == php->_capacity)
	{
		php->_capacity *= 2;
		hpdatatype* tmp = (hpdatatype*)realloc(sizeof(hpdatatype) * php->_capacity);
		php->_a = tmp;
	}
	php->_a[php->_size++] = x;
	adjust(php->_a, php->_size,php->_size-1);
}
void heappop(heap* php)//É¾µô¶Ñ¶¥µÄÊý¾Ý
{
	assert(php);
	assert(php->_size > 0);
	swap(&php->_a[0], &php->_a[php->_size - 1]);
	php->_size--;
	adjust(php->_a, php->_size, 0);
}
hpdatatype heaptop(heap* php)
{
	assert(php);
	assert(php->_size > 0);
	return php->_a[0];
}
void heapsort(int* a, int n)
{
	for (int i = (n - 1-1)/2; i >= 0; i--)
	{
		adjust(a, n, i);
	}
	int end = n - 1;
	while (end>0)
	{
		swap(&a[0], &a[end]);
		adjust(a, end, 0);
		end--;
	}
}
int main()
{
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	heapsort(a, sizeof(a) / sizeof(hpdatatype));
	heap hp;
	heapinit(&hp, a, sizeof(a) / sizeof(hpdatatype));
	heappush(&hp, 13);
	return 0;
}