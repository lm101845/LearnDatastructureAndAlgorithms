//2023��4��22��17:50:37

#include <iostream>
#include "define.h"
using namespace std;

typedef struct CTNode {
	int child;
	struct CTNode* next;
}*ChildPtr;

typedef struct {
	TElemType data;
	ChildPtr firstChild;   //��������ͷָ��
}CTBox;


typedef struct {
	CTBox nodes[MAXSIZE];
	int n, r;   //������͸�����λ��
}CTree;
int main(int argc, char* argv[])
{
	system("PAUSE");
}
