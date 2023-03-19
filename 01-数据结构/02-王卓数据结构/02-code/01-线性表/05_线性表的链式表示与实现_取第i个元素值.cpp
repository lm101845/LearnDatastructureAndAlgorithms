//2023年3月19日14:05:17

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//算法步骤：
//1.从第1个结点(L->next)顺链扫描，用指针p指向当前扫描的结点，p初值p=L->next
//2.j做计数器，累计当前扫描过的结点数，j初值为1
//3.当p指向扫描到的下一结点时，计数器j加1
//4.当j == i时，p所指的结点就是要找的第i个结点
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

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
