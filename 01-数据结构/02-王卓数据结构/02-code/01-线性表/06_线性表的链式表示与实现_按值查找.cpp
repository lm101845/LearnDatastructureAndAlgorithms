//2023年3月19日14:29:24

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//按值查找1：根据指定数据获取该位置所在的位置/地址
//1.从第1个结点起，依次和e相比较
//2.如何找到一个其值与e相等的数据元素，则返回其在链表中的"位置"或地址
//3.如果查遍整个链表都没有找到其值和e相等的元素，则返回0或"NULL"

LNode* LocateElem_L(LinkList L, ElemType e)
//这里函数返回值类型是地址及指针，所以定义的地方有*
{
	LNode * p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}
 
//按值查找2：根据指定数据获取该数据位置序号
int LocateElem_L2(LinkList L, ElemType e)
//返回L中值为e的数据元素的位置序号，查找失败返回0
{
	LNode* p = L->next; 
	int j = 1;
	while (p && p->data != e)
	{
		p = p->next;
		++j;
	}
	if (p)
		return j;
	else
		return 0;
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
