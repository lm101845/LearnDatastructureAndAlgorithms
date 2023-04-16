//2023年4月16日13:05:54

#include <iostream>
#include "define.h"
using namespace std;

typedef char BitreeElemType;
typedef struct __BiNode {
	BitreeElemType data;
	__BiNode* lchild, * rchild;
} BiNode, * BiTree;

//注：伪代码，无法运行 
Status InOrderTraverse(BiTree T) {
	BiTree p;
	InitStack(S);
	p = T;
	while (p || !StackEmpty(S)) {
		if (p) {
			Push(S, p);
			p = p->lchild;
		}
		else {
			Pop(S, q);
			cout << q->data << " ";
		}
	}
	return OK;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
