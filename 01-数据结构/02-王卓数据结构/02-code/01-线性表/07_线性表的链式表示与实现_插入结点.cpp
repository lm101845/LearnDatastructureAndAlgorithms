//2023年3月19日15:04:18

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//算法步骤：
//1.首先找到ai-1的存储位置p
//2.生成一个数据域为e的新结点s
//3.插入新结点：①新结点的指针域指向结点ai ②结点ai-1的指针域指向新结点
Status ListInsert_L(LinkList& L, int i, ElemType e)
{
	LNode* p = L;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i - 1) return ERROR;   //i大于表长+1或者小于1，插入位置非法
	LinkList s = new LNode;
	s -> data = e;  //生成新结点s,将结点s的数据源置为e
	//将新结点插入到链表中
	s->next = p->next;
	p->next = s;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
