//2023��3��21��21:16:47

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//�㷨���裺
//1.��һ���ձ�ʼ���ظ���������
//2.�����½�㣬���������ݴ�ŵ��½�����������
//3.�����һ����㿪ʼ�����ν��������뵽�����ǰ��
void CreateList_H(LinkList& L, int n)
{
	L = (LNode*)malloc(sizeof(LNode));  //C����1
	L->next = NULL;  //�Ƚ���һ����ͷ���ĵ�����
	for (int i = n; i > 0; --i)
	{
		LNode* p = (LNode*) malloc(sizeof(LNode));   //�����½��
		scanf(&p->data);  //����Ԫ��ֵ cin >> p->data;
		p->next = L->next;   //�����½��ָ����ǿ�(��ΪL->next = NULL)
		L -> next = p;    //����ͷ��㲻ָ����ˣ�ָ������½��
	}
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
