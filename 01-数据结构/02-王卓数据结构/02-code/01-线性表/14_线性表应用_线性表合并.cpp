//2023��3��25��14:53:05
#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;


//������ı�(ͷ��㲻���)
int ListLength_L(LinkList L)   //����L������Ԫ�صĸ���
{
	LNode* p;   //����LinkList p;
	p = L->next;  //pָ���һ�����
	int i = 0;
	while (p)   //����������ͳ�ƽ����
	{
		i++;
		p = p->next;
	}
	return i;
}

Status GetElem_L(LinkList L, int i, ElemType& e)
//��ȡ���Ա�L��ĳ��Ԫ�ص����ݣ�ͨ������e����
{
	LNode* p = L->next;
	int j = 1;
	//��ʼ��
	while (p && j < i)
		//ѭ����j = i,��˼���ǵ�j=iʱ����ѭ������ʱָ������ָ���i����㣬������ȡ��
	{
		//˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
		p = p->next;
		++j;
	}
	if (!p || j > i) return ERROR;  //��i��Ԫ�ز�����
	e = p->data;   //ȡ��i��Ԫ��
	return OK;
}

LNode* LocateElem_L(LinkList L, ElemType e)
//���ﺯ������ֵ�����ǵ�ַ��ָ�룬���Զ���ĵط���*
{
	LNode* p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}


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
	s->data = e;  //�����½��s,�����s������Դ��Ϊe
	//���½����뵽������
	s->next = p->next;
	p->next = s;
}

void unionList(LinkList& La, LinkList Lb)
{
	int La_len = ListLength_L(La);
	int Lb_len = ListLength_L(Lb);
	ElemType e;
	for (int i = 0; i <= Lb_len; i++)
	{
		GetElem_L(Lb, i, e);		//��ȡ���Ա�L��ĳ��Ԫ�ص�����
		if (!LocateElem_L(La, e))	 ListInsert_L(La, ++La_len, e);
	}
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
