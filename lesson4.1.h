#pragma 
typedef int stdatatype;
typedef struct stack
{
	stdatatype* _a;
	int _top;
	int _capacity;
}stack;
void stackinit(stack* pst);
void stackdestory(stack* pst);//初始化
void stackpush(stack* pst,stdatatype x);//入栈
void stackpop(stack* pst);//出栈
void stacksize(stack* pst);//获取数据个数
void stackempty(stack* pst);//返回一是空，返回0是非空
stdatatype stacktop(stack* pst);//获取栈顶的数据