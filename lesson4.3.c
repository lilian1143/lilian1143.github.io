#include<stdio.h>
//typedef struct 
//{
//	int* _a;
//	int _front;
//	int _rear;
//	int _k;
//}mycircular;
//mycircular* mycircularcreate(int k)
//{
//	mycircular* q = (mycircular*)malloc(sizeof(mycircular));
//	q->_a =(int*) malloc(sizeof(int) * (k + 1));
//	q->_front = 0;
//	q->_rear = 0;
//	q->_k = k;
//	return q;
//}
//bool mycircularqueue(mycircular* obj, int value)
//{
//	if(mycircularqueueisfull(obj))
//	{
//		return false;
//	}
//	obj->_a[obj->_rear] = value;
//	obj->_rear++;
//	obj->_rear %= (obj->_k + 1);
//	return true;
//}
//bool mycircularqueuedelete(mycircular* obj)
//{
//	if(mycircularqueueisempty(obj))
//	{
//		return false;
//	}
//	++obj->_front;
//	obj->_front %= (obj->_k + 1);
//	return true;
//}
//int mycircularqueuefront(mycircular* obj)
//{
//	if(mycircularqueueisempty(obj)
//	{
//		return -1;
//	}
//	else
//	{
//		return obj->_a[obj->_front];
//	}
//}
//int mycircularqueuerear(mycircular* obj)
//{
//	if (mycircularqueueisempty(obj)
//	{
//		return -1;
//	}
//	else
//	{
//		int tail= obj->_rear - 1;
//		if(tail==-1)
//			tail= obj->_k;
//		return obj->_a[tail];
//	}
//}
//bool mycircularqueueisempty(mycircular* obj)
//{
//	return obj->_front == obj->_rear;
//}
//bool mycircularqueueisfull(mycircular* obj)
//{
//	return (obj->_rear + 1) % (obj->_k + 1) == obj->_front;
//}
//void mycircularqueuefree(mycircular* obj)
//{
//	free(obj->_a);
//	free(obj);
//}
