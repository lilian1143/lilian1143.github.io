#include<stdio.h>
//struct node
//{
//	int data;
//	struct node* next;
//};
//struct node* list(struct node* head)
//{
//
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	struct node* n1 = NULL, *n2 = head, * n3 = head->next;
//	while (n2)
//	{
//		n2->next = n1;
//		n1 = n2;
//		n2 = n3;
//		if(n3)
//		n3 = n3->next;
//	}
//	return n1;
//}