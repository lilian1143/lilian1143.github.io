//#include"lesson4.2.h"
//void queueinit(queue* pq)
//{
//	assert(pq);
//	pq->_head = pq->_tail = NULL;
//
//}
//void queuedestory(queue* pq)
//{
//	queuenode* cur = pq->_head;
//	while (cur)
//	{
//		queuenode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->_head = pq->_tail = NULL;
//}
//void queuepush(queue* pq, qdatatype x)
//{
//	assert(pq);
//	queuenode* newnode =(queuenode*) malloc(sizeof(queuenode));
//	if (newnode == NULL)
//	{
//		printf("ÄÚ´æ²»×ã\n");
//		exit(-1);
//	}
//	newnode->_data = x;
//	newnode->_next = NULL;
//	if (pq->_head == NULL)
//	{
//		pq->_head = pq->_tail = newnode;
//	}
//	else
//	{
//		pq->_tail->_next = newnode;
//		pq->_tail = newnode;
//	}
//}
//void queuepop(queue* pq)
//{
//	assert(pq);
//	queuenode* next = pq->_head->_next;
//	free(pq->_head);
//	pq->_head = next;
//	if (pq->head == NULL)
//	{
//		pq->_tail = NULL;
//	}
//}
//qdatatype queuefront(queue* pq)
//{
//	assert(pq);
//	assert(pq->_head);
//	return pq->_tail->_data;
//}
//qdatatype queueback(queue* pq)
//{
//	assert(pq);
//	assert(pq->_tail);
//	return pq->_tail->_data;
//}
//int queueempty(queue* pq)
//{
//	assert(pq);
//	return pq->_head == NULL ? 1 : 0;
//}
//int queuesize(queue* pq)
//{
//	assert(pq);
//	queuenode* cur = pq->_head;
//	int size = 0;
//	while (cur)
//	{
//		++size;
//		cur = cur->_next;
//	}
//		return size;
//}