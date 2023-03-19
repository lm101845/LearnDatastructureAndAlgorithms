//2023年3月19日08:21:22

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //声明结点的类型和指向结点的指针类型
	ElemType data;			//结点的数据源
	struct LNode* next;     //结点的指针域
} LNode,*LinkList;
//定义链表L： LinkList L;
//定义结点指针p： LNode *p <==> LinkList p;  //因为p本来就是指向这种类型的指针
//为了提高程序的可读性，在此对同一个结构体指针类型起了2个名称：LNode*和LinkList,二者本质上是等价的

//这里说LinkList L指向整个链表，意思是只要你定义了头指针
//(单链表是由表头唯一确定，因为单链表可以用头指针的名字来命名，若头指针名是L，则把链表称为表L)，
//那么你就可以根据头指针，确定整个链表。

/**
结点是内存中一片由用户分配的存储空间，只有一个地址来表示它的存在，没有显式的名称，
因此我们会在分配链表结点空间时定义一个指针，来存储这片空间的地址(这个过程通俗讲叫指针指向结点)
并且常用这个指针的名称来作为结点的名称
*/

//定义1：举例定义一个学生单链表
typedef struct student {
	char num[8];   //数据域
	char name[8];   //数据域
	int score;     //数据域
	struct student* next;   //指针域
} LNode, * LinkList;

//定义2：(为了统一链表的操作，我们通常这样定义)
//定义2用的更多一些
typedef struct {
	char num[8];   //数据域
	char name[8];   //数据域
	int score;     //数据域
} ElemType;

typedef struct Lnode {
	ElemType data;  //数据域
	struct Lnode* next;   //指针域
} Lnode,*LinkList;

int main(int argc, char* argv[])
{

	system("PAUSE");
}
