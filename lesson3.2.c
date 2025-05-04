#include<stdio.h>
//struct list* partition(struct list* phead, int x)
//{
//	struct list* lesshead;
//	struct list* lesstail;
//	struct list* greathead;
//	struct list* greattail;
//	lesshead = lesstail =(list*)malloc(sizeof(list));
//	greathead = greattail= (list*)malloc(sizeof(list));
//	lesshead->next = greathead->next = NULL;
//	list* cur = phead;
//	while (cur)
//	{
//		if (cur->val < x)
//		{
//			lesstail->next = cur;
//			lesstail = lesstail->next;
//		}
//		else
//		{
//			greatail->next = cur;
//			greattail = greattail->next;
//		}
//		cur = cur->next;
//	}
//	lesstail->next = greathead->next;
//	greattail->next = NULL;
//	list* list = lesshead->next;
//	free(lesshead);
//	free(greathead);
//	return list;
//}
//struct list* lind(struct list* A)
//{
//	struct list* fast = A;
//	struct list* slow = A;
//	list* prev = NULL;
//	while (fast && fast->next)
//	{
//      prev=slow;
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//   prev->next=NULL;
 //while(A)
 //{
 //if(A->val!=slow->val)
 //{
 //return false;
 //}
 //else
 //{
//	 A=A->next;
//	 slow=slow->next;
// }
//}


//struct list* node(struct list* ahead, struct list* bhead)
//{
//	list* curA = ahead;
//	int la = 0;
//	while (curA)
//	{
//		la++;
//		curA = curA->next;
//	}
//	list* curB = bhead;
//	int lb= 0;
//	while (curB)
//	{
//		lb++;
//		curB = curB->next;
//	}
//	list* longlist = ahead;
//	list* shortlist = bhead;
//	if (lb > la)
//	{
//		longlist = bhead;
//		shortlist = ahead;
//	}
//	int gap = abs(la - lb);
//	while (gap--)
//	{
//		longlist = longlist->next;
//	}
//	while (longlist)
//	{
//		if (longlist == shortlist)
//		{
//			return longlist;
//		}
//		longlist = longlist->next;
//		shortlist = shortlist->next;
//	}
//	return NULL;
//}
//struct list* node(struct list* head)
//{
//	struct list* slow = head;
//	struct list* fast = head;
//	while (fast && fast->next)
//	{
//		slow - slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			return true;
//		}
//	}
//	return false;
//}


//struct list* cycle(struct list* head)
//{
//	struct list* slow, * fast;
//	slow = fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (fast == slow)
//		{
//			break;
//		}
//	}
//	if (fast != slow) 
//	{
//		return NULL;
//	}
//	struct list* meet = fast;
//	while(head!=meet)
//	{
//		head = head->next;
//		meet = meet->next;
//	}
//	return meet;
//}