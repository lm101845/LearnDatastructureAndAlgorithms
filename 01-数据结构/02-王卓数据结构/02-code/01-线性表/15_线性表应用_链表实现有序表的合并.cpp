//2023年3月25日15:14:02

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

void mergeList(LNode* La, LNode* Lb, LNode*& Lc)  
{
	LNode* pa = La->next;
	LNode* pb = Lb->next;
	LNode* r;   //r始终指向C的终端结点
	Lc = La;  //用A的头结点作为C的头结点
	Lc->next = NULL;
	free(Lb);  //B的头结点已无用，释放掉
	r = Lc;  //r指向C，因为此时头结点也是终端结点
	while (pa != NULL && pb != NULL)
	{
		if (pa->data <= pb->data)
		{
			r->next = pa;
			pa = pa->next;
			r = r->next;  //r始终指向当前链表的终端结点
		}
		else
		{
			r->next = pb;
			pb = pb->next;
			r = r->next;  //r始终指向当前链表的终端结点
		}
	}
	r->next = NULL;  //这语句其实可以去掉
	if (pa != NULL) r->next = pa;
	if (pb != NULL) r->next = pb;
}


int main(int argc, char* argv[])
{
	system("PAUSE");
}
