//2023��3��26��21:05:22

#include <iostream>
#include "define.h"
using namespace std;

typedef struct SqStack {
	SElemType* base;  //ջ��ָ��
	SElemType* top;   //ջ��ָ��
	int stacksize;    //ջ�����������
} SqStack;

//�ж�˳��ջ�Ƿ�Ϊ��
Status StackEmpty(SqStack S)
{
	if (S.top == S.base)
		return TRUE;
	else
		return FALSE;
}

//��˳��ջ�ĳ���
int StackLength(SqStack S)
{
	return S.top - S.base; 
}

//���˳��ջ
Status ClearStack(SqStack S)
{
	if (S.base) S.top = S.base;   //���������Ϊ��ջʱֵ�Ḳ�ǣ�����û��Ҫ�������
	return OK;
}

//����˳��ջ
Status DestroyStack(SqStack& S)
{
	if (S.base) {
		delete S.base;   //deleteָ�룬�ͷŵ���ָ����ָ���ݣ�ָ�뱾����
		S.stacksize = 0;
		S.base = S.top = NULL;  //NULLɾ��ָ��
	}
	return OK;
}

//˳��ջ����ջ
//˼·��
//1.�ж��Ƿ�ջ�������������(����)
//2.Ԫ��eѹ��ջ��
//3.ջ��ָ���1
Status Push(SqStack& S, SElemType e)
{
	if (S.top - S.base == S.stacksize)  //ջ��
		return ERROR;
	*(S.top)++ = e;   //�ȸ�ֵ��ָ���ټ�1  �ȼ��� *S.top = e;  S.top++;
	return OK;
}

//˳��ջ�ĳ�ջ
//˼·��
//1.�ж��Ƿ�ջ�գ����������(����)
//2.��ȡջ��Ԫ��e
//3.ջ��ָ���1
Status Pop(SqStack& S, SElemType& e)
{
	//��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
	if (S.top == S.base)  return ERROR;
	e = *--S.top;  //�ȼ���ȡֵ �ȼ��� --S.top; e=*S.top;
	return OK;
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
