#include<stdio.h>
//struct list* merge(struct list* l1, struct list* l2)
//{
//	if (l1 == NULL)
//		return l2;
//	if (l2 == NULL)
//		return l1;
//	node* head = NULL, *tail = NULL;
//	if (l1->val < l2->val2)
//	{
//		head = tail = l1;
//		l1 = l1->next;
//	}
//	else
//	{
//		head = tail = l2;
//		l2 = l2->next;
//	}
//	while (l1 && l2)
//	{
//		if (l1->val < l2->val)
//		{
//			tail->next = l1;
//			l1 = l1->next;
//		}
//		else
//		{
//			tail->next = l2;
//			l2 = l2->next;
//		}
//		tail = tail->next;
//	}
//	if (l1)
//		tail->next = l1;
//	else
//		tail->next = l2;
//	node* realhead = head->next;
//	free(head);
//	return realhead;
//}
//int* number(int* nums, int numssize, int* returnsize)
//{
//	int ret = 0;
//	for (int i = 0; i < numssize; i++)
//	{
//		ret ^= nums[i];
//	}
//	int m = 0;
//	while(m<32)
//	{
//		if (ret & (1 << m))
//			break;
//		else
//			m++;
//	}
//	int x1 = 0, x2 = 0;
//	for (int i = 0; i < numssize; i++)
//	{
//		if (nums[i] & (1 << m))
//		{
//			x1 ^= nums[i];
//		}
//		else
//		{
//			x2 ^= nums[i];
//		}
//	}
//	int* ret = (int*)malloc(sizeof(int) * 2);
//	ret[0] = x1;
//	ret[1] = x2;
//	*returnsize = 2;
//	return ret;
//}
