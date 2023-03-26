//2023年3月26日20:32:42

#include <iostream>
#include "define.h"
using namespace std;


typedef struct SqStack{
	SElemType* base;  //栈底指针
	SElemType* top;   //栈顶指针
	int stacksize;    //栈可用最大容量
} SqStack;

Status InitStack(SqStack& S)   //构造一个空栈
{
	//S.base = new SElemType[MAXSIZE];  //C++语法
	S.base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));  //C语法
	if (!S.base) exit(OVERFLOW);   //存储分配失败
	S.top = S.base;    //栈顶指针等于栈底指针
	S.stacksize = MAXSIZE;
	return OK; 
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
