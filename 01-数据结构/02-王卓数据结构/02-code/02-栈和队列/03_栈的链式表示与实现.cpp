//2023年3月26日21:39:06

#include <iostream>
#include "define.h"
using namespace std;

//链栈是【运算受限】的单链表，只能在【链表头部】进行操作
typedef struct StackNode {
	SElemType data;  
	struct StackNode* next;  
} StackNode ,*LinkStack;

//LinkStack S;

//链栈的初始化
Status InitStack(LinkStack& S)
{
	//构造一个空栈，栈顶指针置为空
	S = NULL;
	return OK;
}

//判断链栈是否为空
Status StackEmpty(LinkStack S)
{
	if (S == NULL) return TRUE;
	else return FALSE;
}


//链栈的入栈
Status Push(LinkStack& S, SElemType e)
{
	StackNode * p = new StackNode;    //生成新结点
	p->data = e;   //将新结点数据域置为e
	p->next = S;   //将新结点插入栈顶
	S = p;   //修改栈顶指针
	return OK;
}


//链栈的出栈
Status Pop(LinkStack& S, SElemType& e)
{
	if (S == NULL) return ERROR; 
	e = S->data;
	StackNode* p = S;
	S = S->next;
	delete p;
	return OK;
}


//获取栈顶元素
SElemType GetTop(LinkStack S)
{
	if (S != NULL)
		return S->data;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
