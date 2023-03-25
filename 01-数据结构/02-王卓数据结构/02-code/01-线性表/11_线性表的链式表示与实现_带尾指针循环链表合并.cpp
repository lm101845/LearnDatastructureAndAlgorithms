//2023年3月22日12:13:36

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode, * LinkList;

//带尾指针循环链表的合并(将Tb合并在Ta之后)
//算法步骤：
//1.p存表头结点
//2.Tb表头连接到Ta表尾
//3.释放Tb表头结点
//4.修改指针
LinkList Connect(LinkList Ta, LinkList Tb)
//假设Ta,Tb都是非空的单循环链表
{
	LNode* p = Ta->next;   //p存表头结点
	Ta->next = Tb->next->next;  //Tb表头连接到Ta表尾
	delete Tb->next;    //释放Tb表头结点
	Tb->next = p;       //修改指针
	return Tb;   //因为return了，所以参数不用带取地址符号了
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
