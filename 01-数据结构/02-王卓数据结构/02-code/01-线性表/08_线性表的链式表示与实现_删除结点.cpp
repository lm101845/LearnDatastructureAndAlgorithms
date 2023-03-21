//2023��3��21��12:21:44

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//�㷨���裺
//1.���ҵ�ai-1�Ĵ洢λ��p������Ҫɾ����ai��ֵ
// 2.��p->nextָ��ai+1
//3.�ͷŽ��ai�Ŀռ�

Status ListDelete_L(LinkList& L, int i, ElemType& e)
{
	LNode* p = L;  //��ʱpָ�����ͷ���
	LNode* q = NULL;
	int j = 0;  //��ͷ���ı�Ŷ�Ϊ0������ͷ����λ��Ϊ1 ?
	while (p->next && j < i - 1)   //ɾ��Ԫ�ط�Χ��1~n(������Ԫ�ط�Χ��1~n+1)
		//iС��1����ʱi-1С��0����ʱj<0Ϊ��
		//i����n,��ʱp->next��Ϊ����
	{
		p = p->next;
		++j;
	}
	//�ҵ���i����㣬����pָ����ǰ��
	if (!(p->next) || j > i - 1) return ERROR;   //ɾ��λ�ò�����
	q = p->next;   //��ʱ���汻ɾ���ĵ�ַ�Ա��ͷ�
	p->next = q->next;   //�ı�ɾ�����ǰ������ָ����
	e = q->data;   //����ɾ������������
	delete q;   //�ͷ�ɾ�����Ŀռ�
	return OK;
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
