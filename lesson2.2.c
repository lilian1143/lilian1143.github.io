#include<stdio.h>
//struct list* node(struct list* head)
//{
//	struct  list* slow = head;
//	struct list* fast = head;
//	while (fast&&fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//} 
//struct list* find(struct list* head, int k)
//{
//	list* fast = head;
//	list* slow = head;
//	while (k--)
//	{
//		if (fast)
//			fast = fast->next;
//		else
//			return;
//	}
//	while (fast)
//	{
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}