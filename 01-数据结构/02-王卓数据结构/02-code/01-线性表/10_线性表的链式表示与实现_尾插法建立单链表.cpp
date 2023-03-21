//2023年3月21日21:55:23

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//算法步骤：
//1.从一个空表开始，将新结点逐个插入到链表的尾部，尾指针r指向链表的尾结点
//2.初始时，r同L均指向头结点。每读入一个数据元素则申请一个新结点，将新结点插入到尾结点后，r指向新结点

void CreateList_R(LinkList& L, int n)
{
	L = (LNode*)malloc(sizeof(LNode));  //C方法1
	L->next = NULL;  //先建立一个带头结点的单链表
	LNode* r = L;    //将头指针赋值给尾指针
	for (int i = 0; i < n; i++)
	{
		LNode* p = (LNode*)malloc(sizeof(LNode));   //生成新结点
		scanf(&p->data);  //输入元素值 cin >> p->data;
		p->next = NULL;   //新结点的next域置空
		//把这个新结点接在当前链表的最后一个结点的后面
		r->next = p;   //插入到表尾
		r = p;    //r指向新的尾结点
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
