#pragma 
typedef int stdatatype;
typedef struct stack
{
	stdatatype* _a;
	int _top;
	int _capacity;
}stack;
void stackinit(stack* pst);
void stackdestory(stack* pst);//��ʼ��
void stackpush(stack* pst,stdatatype x);//��ջ
void stackpop(stack* pst);//��ջ
void stacksize(stack* pst);//��ȡ���ݸ���
void stackempty(stack* pst);//����һ�ǿգ�����0�Ƿǿ�
stdatatype stacktop(stack* pst);//��ȡջ��������