//2023��3��19��15:04:18

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//�㷨���裺
//1.�����ҵ�ai-1�Ĵ洢λ��p
//2.����һ��������Ϊe���½��s
//3.�����½�㣺���½���ָ����ָ����ai �ڽ��ai-1��ָ����ָ���½��
Status ListInsert_L(LinkList& L, int i, ElemType e)
{
	LNode* p = L;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i - 1) return ERROR;   //i���ڱ�+1����С��1������λ�÷Ƿ�
	LinkList s = new LNode;
	s -> data = e;  //�����½��s,�����s������Դ��Ϊe
	//���½����뵽������
	s->next = p->next;
	p->next = s;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
