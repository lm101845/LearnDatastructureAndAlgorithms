//2023��3��18��21:22:15

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "define.h"
#include "method.h" 
#include <iostream>
using namespace std;

typedef struct {
	ElemType *elem;   //�洢�ռ��ַ
	int length;       //��ǰ����
	//int listsize;     //��ǰ����Ĵ洢����(��sizeof(ElemType)Ϊ��λ)
} SqList;  //˳�������


//�㷨1�����Ա�L�ĳ�ʼ��(����������)  
Status InitList_Sq(SqList &L)  //����һ���յ�˳���L
{
	L.elem = new ElemType[MaxSize];   //Ϊ˳������ռ�(C++д�������Ӽ�)
	if (!L.elem) exit(OVERFLOW);      //�洢����ʧ��
	L.length = 0;                     //�ձ���Ϊ0
	return OK;
}

//�㷨2���������Ա�L(���Ա���������)
void DestoryList(SqList& L)
{
	if (L.elem) delete L.elem;   //�ͷŴ洢�ռ�
}


//�㷨3��������Ա�L(���Ա��ڣ�ֻ��������û��Ԫ����)
void ClearList(SqList& L)
{
	L.length = 0;    //�����Ա�ĳ�����Ϊ0
}

//�㷨4�������Ա�ĳ���
int GetLength(SqList L)
{
	return L.length;
}

//�㷨5���ж����Ա��Ƿ�Ϊ��
int IsEmpty(SqList L)
{
	if (L.length == 0) return 1;
	else return 0;
}

//�㷨6��˳����ȡֵ(����λ��i��ȡ��Ӧλ������Ԫ�ص�����)
int GetElem(SqList L, int i, ElemType& e)
{
	if (i <1 || i > L.length) return ERROR;  //�ж�iֵ�Ƿ����������������ERROR
	e = L.elem[i - 1];
	return OK;
}

//�㷨7��˳���Ĳ���(�����Ա�L�в�����ָ��ֵe��ͬ������Ԫ�صġ�λ�á�)
int LocateElem(SqList L, ElemType e)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (L.elem[i] == e)  return i + 1;   //���ҳɹ����������
 	}
	return 0;   //����ʧ�ܣ�����0
}

//�㷨8�����Ա�Ĳ��� (��p24)
//1.�жϲ���λ��i�Ƿ�Ϸ�
//2.�ж�˳���Ĵ洢�ռ��Ƿ�����������������ERROR
//3.����n����iλ��Ԫ����������ƶ�һ��λ�ã��ճ���i��λ��
//4.��Ҫ�������Ԫ��e�����i��λ��
//5.����1������ɹ�����OK
Status ListInsert_Sq(SqList& L, int i, ElemType e)
{
	//��˳�����Ա�L�е�i(�û����е�i����һ��ֵ��1������0)��λ��֮ǰ�����µ�Ԫ��e
	if (i < 1 || i > L.length + 1) return ERROR;   //����λ��i���Ϸ�
	if (L.length == MaxSize) return ERROR;     //��ǰ�洢�ռ�����(���������Ļ���û��ֱ�ӱ����������Ӵ洢�ռ�)
	for (int j = L.length - 1; j >= i - 1; j--)   //����j���±꣬������length-1
	{
		L.elem[j + 1] = L.elem[j];    //����λ�ü�֮���Ԫ������
	}
	L.elem[i - 1] = e;				//����Ԫ��e�����i��λ��
	L.length++;    //������1
}

//�㷨9�����Ա��ɾ��(��p24)
//1.�ж�ɾ��λ��i�Ƿ�Ϸ�(�Ϸ�ֵΪ1<=i<=n)
//2.����ɾ����Ԫ�ر�����e��
//3.����i+1����nλ��Ԫ��������ǰ�ƶ�һ��λ��
//4.����1��ɾ���ɹ�����OK
Status ListDelete_Sq(SqList& L, int i)
{
	if (i < 1 || i > L.length) return ERROR;   //iֵ���Ϸ�
	for (int j = i; j <= L.length - 1; j++)
	{
		L.elem[j - 1] = L.elem[j];
	}
	L.length--;
	return OK;
}
int main(int argc, char* argv[])
{
	system("PAUSE");
}
