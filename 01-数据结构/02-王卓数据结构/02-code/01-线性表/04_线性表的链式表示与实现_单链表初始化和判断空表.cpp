//2023年3月19日09:45:39

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//算法1：单链表初始化
//1.生成新结点作头结点，用头指针L指向头结点
//2.将头结点的指针域置空
Status InitList_L(LinkList& L) {
	//L = new LNode();   //C++方法
	L = (LNode*)malloc(sizeof(LNode));  //C方法1
	//L = (LinkList)malloc(sizeof(LNode));  //C方法2
	L->next = NULL;
	return OK;
}

//算法2：判断一个链表是否为空
//空表：链表中无元素，称为空链表(头指针和头结点仍然在)
int ListEmpty(LinkList L)  //若L为空表，则返回1，否则返回0
{
	if (L->next)  //非空  //头指针L存的是头结点的地址，则L->next存的就是第一个元素的地址了
		return 0;
	else
		return 1;
}


//算法3：单链表的销毁
//从头指针开始，依次释放所有结点
Status DestoryList(LinkList& L)   //销毁单链表
{
	LNode* p;   //或LinkList p;   //先创建一个指针变量
	//销毁是一个反复的动作，需要一个结点一个结点进行销毁
	//当前我们所指的结点如果不是空结点的话，我们就对它进行销毁
	while (L)
	{
		p = L;
		L = L->next;
		delete p;
	}
	return OK;
}

//算法4：清空链表
//链表仍存在，但链表中无元素，成为空链表(头指针和头结点仍然在)
//思路：依次释放所有结点，并将头结点指针域设置为空
Status ClearList(LinkList& L)    //将L重置为空表
{
	LNode* p, * q;   //或LinkList p,q;
	p = L->next;  //L是头指针，指向头结点，L->next指向的就是首元结点a1,用p保存起来
	while (p)  //没到表尾
	{
		q = p->next;    //a2保存在q中
		delete p;    //删掉a1
		p = q;       //把p的aq删完后，为了补偿p，又把a2给了p,最后p为an,尾结点,p-next就为NULL了
	}
	L->next = NULL;   //再把头结点指针域置为空
	return OK;
}

//算法5：求单链表的表长(头结点不算表长)
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
int main(int argc, char* argv[])
{
	system("PAUSE");
}
