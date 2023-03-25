//2023��3��25��14:11:09

#include <iostream>
#include "define.h"
using namespace std;

//˫������Ķ���
typedef struct DuLNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct DuLNode* prior;     //����ָ����
	struct DuLNode* next;     //����ָ����
} DuLNode, * DuLinkList;

Status ListDelete_Dul(DuLinkList& L, int i, ElemType& e)
{
	//ɾ����ͷ����˫��ѭ������L�ĵ�i��Ԫ�أ�����e����
	DuLinkList p = L;
	int j = 0;
	while (p->next && j < i - 1) {
		p = p->next;
		j++;
	}
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	return OK;
}
int main(int argc, char* argv[])
{
	system("PAUSE");
}
