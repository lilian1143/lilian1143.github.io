#include"lesson3.3.h"
#include<stdio.h>
void testlist1()
{
	/*listnode* phead = NULL;
	listinit(&phead);*/
	listnode* phead = listinit();
	listpushback(phead, 1);
	listpushback(phead, 2); 
	listpushback(phead, 3);
	listpushback(phead, 4);
	listprint(phead);
	listpopback(phead);
	listpopback(phead);
	listprint(phead);
	listdestory(&phead);
}
int main()
{
	listnode* phead = NULL;
	return 0;
}