#include"lesson4.1.h"
void stackinit(stack* pst)
{
	assert(pst);
	pst->_a = malloc(sizeof(stdatatype) * 4);;
	pst->_top = 0;
	pst->_capacity = 4;
}
	
void stackdestory(stack* pst);
{
	assert(pst);
	free(pst->_a);
	pst->_a = NULL;
	pst->_top = pst->_capacity = 0;
}
void stackpush(stack* pst, stdatatype x);
{
	assert(pst);
	if (pst->_top == pst->_capacity)
	{
		pst->_capacity *= 2;
		stdatatype* tmp = realloc(pst->_a,
			sizeof(stdatatype) * pst->_capacity);
		if (tmp == NULL)
		{
			printf("ÄÚ´æ¿Õ¼ä²»×ã\n");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
		}
	}
	pst->_a[pst->top] = x;
	pst->_top++;
}
void stackpop(stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	--pst->_top;
}
void stacksize(stack* pst)
{
	assert(pst);
	return pst->_top;
}
void stackempty(stack* pst)
{
	assert(pst);
	return pst->_top == 0 ? 1 : 0;
}
stdatatype  stacktop(stack* pst)
{
	assert(pst);
	assert(pst->_top>0);
	return pst->_a[pst->_top - 1];
}