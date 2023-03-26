//2023年3月26日21:05:22

#include <iostream>
#include "define.h"
using namespace std;

typedef struct SqStack {
	SElemType* base;  //栈底指针
	SElemType* top;   //栈顶指针
	int stacksize;    //栈可用最大容量
} SqStack;

//判断顺序栈是否为空
Status StackEmpty(SqStack S)
{
	if (S.top == S.base)
		return TRUE;
	else
		return FALSE;
}

//求顺序栈的长度
int StackLength(SqStack S)
{
	return S.top - S.base; 
}

//清空顺序栈
Status ClearStack(SqStack S)
{
	if (S.base) S.top = S.base;   //不清除是因为进栈时值会覆盖，所以没必要进行清空
	return OK;
}

//销毁顺序栈
Status DestroyStack(SqStack& S)
{
	if (S.base) {
		delete S.base;   //delete指针，释放的是指针所指内容，指针本身还在
		S.stacksize = 0;
		S.base = S.top = NULL;  //NULL删除指针
	}
	return OK;
}

//顺序栈的入栈
//思路：
//1.判断是否栈满，若满则出错(上溢)
//2.元素e压入栈顶
//3.栈顶指针加1
Status Push(SqStack& S, SElemType e)
{
	if (S.top - S.base == S.stacksize)  //栈满
		return ERROR;
	*(S.top)++ = e;   //先赋值，指针再加1  等价于 *S.top = e;  S.top++;
	return OK;
}

//顺序栈的出栈
//思路：
//1.判断是否栈空，若空则出错(下溢)
//2.获取栈顶元素e
//3.栈顶指针减1
Status Pop(SqStack& S, SElemType& e)
{
	//若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
	if (S.top == S.base)  return ERROR;
	e = *--S.top;  //先减再取值 等价于 --S.top; e=*S.top;
	return OK;
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
