//2023��3��25��12:17:28

#include <iostream>
#include "define.h"
using namespace std;

//˫������Ķ���
typedef struct DuLNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct DuLNode* prior;     //����ָ����
	struct DuLNode* next;     //����ָ����
} DuLNode, * DuLinkList;


DuLinkList GetElemP_DuL(DuLinkList L, int i) {
	DuLinkList p;
	p = L->next;
	int j = 1;  // ��ʼ����pָ���һ����㣬jΪ������
	while (p != L && j < i) { //˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
		p = p->next; 
		++j;
	}
	if (p == L && j < i) return NULL;  // ��i��Ԫ�ز�����
	else return p;
}

Status ListInsert_Dul(DuLinkList& L, int i, ElemType e)
{
	//�ڴ�ͷ����˫��ѭ������L�ڵ�i��λ�á�֮ǰ������Ԫ��e
	//if (!(p = GetElemP_Dul(L, i))) return ERROR;  //ֱ�ӵ��ú�������
	int j = 0;
	DuLinkList p = L;
	while (p->next && j < i - 1) {
		j++;
		p = p->next;
	}
	//��L��ȷ�ϲ���λ��ָ��p:i���ڱ�+1ʱ��pָ��ͷ��㣻i���ڱ���1ʱ��p=NUL
	DuLinkList s = new DuLNode();
	s->data = e;
	s->prior = p->prior;
	p->prior->next = s;
	s->next = p;
	p->prior = s;
	return OK;
}


int main(int argc, char* argv[])
{
	
	system("PAUSE");
}

