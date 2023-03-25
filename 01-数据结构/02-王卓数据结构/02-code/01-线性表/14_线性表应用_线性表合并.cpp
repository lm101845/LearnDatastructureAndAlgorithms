//2023年3月25日14:53:05
#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;


//求单链表的表长(头结点不算表长)
int ListLength_L(LinkList L)   //返回L中数据元素的个数
{
	LNode* p;   //或者LinkList p;
	p = L->next;  //p指向第一个结点
	int i = 0;
	while (p)   //遍历单链表，统计结点数
	{
		i++;
		p = p->next;
	}
	return i;
}

Status GetElem_L(LinkList L, int i, ElemType& e)
//获取线性表L中某个元素的内容，通过变量e返回
{
	LNode* p = L->next;
	int j = 1;
	//初始化
	while (p && j < i)
		//循环到j = i,意思就是当j=i时跳出循环，此时指针正好指向第i个结点，把数据取出
	{
		//顺指针向后查找，直到p指向第i个元素或p为空
		p = p->next;
		++j;
	}
	if (!p || j > i) return ERROR;  //第i个元素不存在
	e = p->data;   //取第i个元素
	return OK;
}

LNode* LocateElem_L(LinkList L, ElemType e)
//这里函数返回值类型是地址及指针，所以定义的地方有*
{
	LNode* p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}


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
	s->data = e;  //生成新结点s,将结点s的数据源置为e
	//将新结点插入到链表中
	s->next = p->next;
	p->next = s;
}

void unionList(LinkList& La, LinkList Lb)
{
	int La_len = ListLength_L(La);
	int Lb_len = ListLength_L(Lb);
	ElemType e;
	for (int i = 0; i <= Lb_len; i++)
	{
		GetElem_L(Lb, i, e);		//获取线性表L中某个元素的内容
		if (!LocateElem_L(La, e))	 ListInsert_L(La, ++La_len, e);
	}
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
