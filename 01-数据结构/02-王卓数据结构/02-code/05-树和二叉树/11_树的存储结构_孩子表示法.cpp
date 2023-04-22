//2023年4月22日17:50:37

#include <iostream>
#include "define.h"
using namespace std;

typedef struct CTNode {
	int child;
	struct CTNode* next;
}*ChildPtr;

typedef struct {
	TElemType data;
	ChildPtr firstChild;   //孩子链表头指针
}CTBox;


typedef struct {
	CTBox nodes[MAXSIZE];
	int n, r;   //结点数和根结点的位置
}CTree;
int main(int argc, char* argv[])
{
	system("PAUSE");
}
