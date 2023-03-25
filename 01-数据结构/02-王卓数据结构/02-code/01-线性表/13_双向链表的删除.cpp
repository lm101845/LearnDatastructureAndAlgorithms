//2023年3月25日14:11:09

#include <iostream>
#include "define.h"
using namespace std;

//双向链表的定义
typedef struct DuLNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct DuLNode* prior;     //结点的指针域
	struct DuLNode* next;     //结点的指针域
} DuLNode, * DuLinkList;

Status ListDelete_Dul(DuLinkList& L, int i, ElemType& e)
{
	//删除第头结点的双向循环链表L的第i个元素，并用e返回
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
