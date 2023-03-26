//2023��3��26��20:32:42

#include <iostream>
#include "define.h"
using namespace std;


typedef struct SqStack{
	SElemType* base;  //ջ��ָ��
	SElemType* top;   //ջ��ָ��
	int stacksize;    //ջ�����������
} SqStack;

Status InitStack(SqStack& S)   //����һ����ջ
{
	//S.base = new SElemType[MAXSIZE];  //C++�﷨
	S.base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));  //C�﷨
	if (!S.base) exit(OVERFLOW);   //�洢����ʧ��
	S.top = S.base;    //ջ��ָ�����ջ��ָ��
	S.stacksize = MAXSIZE;
	return OK; 
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
