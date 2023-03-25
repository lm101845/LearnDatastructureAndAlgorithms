//2023��3��25��15:14:02

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

void mergeList(LNode* La, LNode* Lb, LNode*& Lc)  
{
	LNode* pa = La->next;
	LNode* pb = Lb->next;
	LNode* r;   //rʼ��ָ��C���ն˽��
	Lc = La;  //��A��ͷ�����ΪC��ͷ���
	Lc->next = NULL;
	free(Lb);  //B��ͷ��������ã��ͷŵ�
	r = Lc;  //rָ��C����Ϊ��ʱͷ���Ҳ���ն˽��
	while (pa != NULL && pb != NULL)
	{
		if (pa->data <= pb->data)
		{
			r->next = pa;
			pa = pa->next;
			r = r->next;  //rʼ��ָ��ǰ������ն˽��
		}
		else
		{
			r->next = pb;
			pb = pb->next;
			r = r->next;  //rʼ��ָ��ǰ������ն˽��
		}
	}
	r->next = NULL;  //�������ʵ����ȥ��
	if (pa != NULL) r->next = pa;
	if (pb != NULL) r->next = pb;
}


int main(int argc, char* argv[])
{
	system("PAUSE");
}
