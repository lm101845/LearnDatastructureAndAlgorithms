//2023��3��19��09:45:39

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//�㷨1���������ʼ��
//1.�����½����ͷ��㣬��ͷָ��Lָ��ͷ���
//2.��ͷ����ָ�����ÿ�
Status InitList_L(LinkList& L) {
	//L = new LNode();   //C++����
	L = (LNode*)malloc(sizeof(LNode));  //C����1
	//L = (LinkList)malloc(sizeof(LNode));  //C����2
	L->next = NULL;
	return OK;
}

//�㷨2���ж�һ�������Ƿ�Ϊ��
//�ձ���������Ԫ�أ���Ϊ������(ͷָ���ͷ�����Ȼ��)
int ListEmpty(LinkList L)  //��LΪ�ձ��򷵻�1�����򷵻�0
{
	if (L->next)  //�ǿ�  //ͷָ��L�����ͷ���ĵ�ַ����L->next��ľ��ǵ�һ��Ԫ�صĵ�ַ��
		return 0;
	else
		return 1;
}


//�㷨3�������������
//��ͷָ�뿪ʼ�������ͷ����н��
Status DestoryList(LinkList& L)   //���ٵ�����
{
	LNode* p;   //��LinkList p;   //�ȴ���һ��ָ�����
	//������һ�������Ķ�������Ҫһ�����һ������������
	//��ǰ������ָ�Ľ��������ǿս��Ļ������ǾͶ�����������
	while (L)
	{
		p = L;
		L = L->next;
		delete p;
	}
	return OK;
}

//�㷨4���������
//�����Դ��ڣ�����������Ԫ�أ���Ϊ������(ͷָ���ͷ�����Ȼ��)
//˼·�������ͷ����н�㣬����ͷ���ָ��������Ϊ��
Status ClearList(LinkList& L)    //��L����Ϊ�ձ�
{
	LNode* p, * q;   //��LinkList p,q;
	p = L->next;  //L��ͷָ�룬ָ��ͷ��㣬L->nextָ��ľ�����Ԫ���a1,��p��������
	while (p)  //û����β
	{
		q = p->next;    //a2������q��
		delete p;    //ɾ��a1
		p = q;       //��p��aqɾ���Ϊ�˲���p���ְ�a2����p,���pΪan,β���,p-next��ΪNULL��
	}
	L->next = NULL;   //�ٰ�ͷ���ָ������Ϊ��
	return OK;
}

//�㷨5��������ı�(ͷ��㲻���)
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
int main(int argc, char* argv[])
{
	system("PAUSE");
}
