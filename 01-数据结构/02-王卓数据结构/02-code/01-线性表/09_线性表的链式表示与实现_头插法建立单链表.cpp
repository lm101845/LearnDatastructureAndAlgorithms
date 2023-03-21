//2023年3月21日21:16:47

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//算法步骤：
//1.从一个空表开始，重复读入数据
//2.生成新结点，将读入数据存放到新结点的数据域中
//3.从最后一个结点开始，依次将各结点插入到链表的前端
void CreateList_H(LinkList& L, int n)
{
	L = (LNode*)malloc(sizeof(LNode));  //C方法1
	L->next = NULL;  //先建立一个带头结点的单链表
	for (int i = n; i > 0; --i)
	{
		LNode* p = (LNode*) malloc(sizeof(LNode));   //生成新结点
		scanf(&p->data);  //输入元素值 cin >> p->data;
		p->next = L->next;   //这里新结点指向的是空(因为L->next = NULL)
		L -> next = p;    //这里头结点不指向空了，指向这个新结点
	}
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
