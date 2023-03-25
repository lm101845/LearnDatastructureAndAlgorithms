//2023年3月25日12:17:28

#include <iostream>
#include "define.h"
using namespace std;

//双向链表的定义
typedef struct DuLNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct DuLNode* prior;     //结点的指针域
	struct DuLNode* next;     //结点的指针域
} DuLNode, * DuLinkList;


DuLinkList GetElemP_DuL(DuLinkList L, int i) {
	DuLinkList p;
	p = L->next;
	int j = 1;  // 初始化，p指向第一个结点，j为计数器
	while (p != L && j < i) { //顺指针向后查找，直到p指向第i个元素或p为空
		p = p->next; 
		++j;
	}
	if (p == L && j < i) return NULL;  // 第i个元素不存在
	else return p;
}

Status ListInsert_Dul(DuLinkList& L, int i, ElemType e)
{
	//在带头结点的双向循环链表L内第i个位置【之前】插入元素e
	//if (!(p = GetElemP_Dul(L, i))) return ERROR;  //直接调用函数报错
	int j = 0;
	DuLinkList p = L;
	while (p->next && j < i - 1) {
		j++;
		p = p->next;
	}
	//在L中确认插入位置指针p:i等于表长+1时，p指向头结点；i大于表长加1时，p=NUL
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

