//2023��3��21��21:55:23

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//�㷨���裺
//1.��һ���ձ�ʼ�����½��������뵽�����β����βָ��rָ�������β���
//2.��ʼʱ��rͬL��ָ��ͷ��㡣ÿ����һ������Ԫ��������һ���½�㣬���½����뵽β����rָ���½��

void CreateList_R(LinkList& L, int n)
{
	L = (LNode*)malloc(sizeof(LNode));  //C����1
	L->next = NULL;  //�Ƚ���һ����ͷ���ĵ�����
	LNode* r = L;    //��ͷָ�븳ֵ��βָ��
	for (int i = 0; i < n; i++)
	{
		LNode* p = (LNode*)malloc(sizeof(LNode));   //�����½��
		scanf(&p->data);  //����Ԫ��ֵ cin >> p->data;
		p->next = NULL;   //�½���next���ÿ�
		//������½����ڵ�ǰ��������һ�����ĺ���
		r->next = p;   //���뵽��β
		r = p;    //rָ���µ�β���
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
