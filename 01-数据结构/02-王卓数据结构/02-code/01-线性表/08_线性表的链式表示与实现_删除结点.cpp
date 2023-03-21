//2023年3月21日12:21:44

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//算法步骤：
//1.先找到ai-1的存储位置p，保存要删除的ai的值
// 2.令p->next指向ai+1
//3.释放结点ai的空间

Status ListDelete_L(LinkList& L, int i, ElemType& e)
{
	LNode* p = L;  //此时p指向的是头结点
	LNode* q = NULL;
	int j = 0;  //把头结点的编号定为0，但是头结点的位置为1 ?
	while (p->next && j < i - 1)   //删除元素范围是1~n(而插入元素范围是1~n+1)
		//i小于1，此时i-1小于0，此时j<0为负
		//i大于n,此时p->next就为空了
	{
		p = p->next;
		++j;
	}
	//找到第i个结点，并令p指向其前驱
	if (!(p->next) || j > i - 1) return ERROR;   //删除位置不合理
	q = p->next;   //临时保存被删结点的地址以备释放
	p->next = q->next;   //改变删除结点前驱结点的指针域
	e = q->data;   //保存删除结点的数据域
	delete q;   //释放删除结点的空间
	return OK;
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
