//2023��3��26��21:39:06

#include <iostream>
#include "define.h"
using namespace std;

//��ջ�ǡ��������ޡ��ĵ�����ֻ���ڡ�����ͷ�������в���
typedef struct StackNode {
	SElemType data;  
	struct StackNode* next;  
} StackNode ,*LinkStack;

//LinkStack S;

//��ջ�ĳ�ʼ��
Status InitStack(LinkStack& S)
{
	//����һ����ջ��ջ��ָ����Ϊ��
	S = NULL;
	return OK;
}

//�ж���ջ�Ƿ�Ϊ��
Status StackEmpty(LinkStack S)
{
	if (S == NULL) return TRUE;
	else return FALSE;
}


//��ջ����ջ
Status Push(LinkStack& S, SElemType e)
{
	StackNode * p = new StackNode;    //�����½��
	p->data = e;   //���½����������Ϊe
	p->next = S;   //���½�����ջ��
	S = p;   //�޸�ջ��ָ��
	return OK;
}


//��ջ�ĳ�ջ
Status Pop(LinkStack& S, SElemType& e)
{
	if (S == NULL) return ERROR; 
	e = S->data;
	StackNode* p = S;
	S = S->next;
	delete p;
	return OK;
}


//��ȡջ��Ԫ��
SElemType GetTop(LinkStack S)
{
	if (S != NULL)
		return S->data;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
