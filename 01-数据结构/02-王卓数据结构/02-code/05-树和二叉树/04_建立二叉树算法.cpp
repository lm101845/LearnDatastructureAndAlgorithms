//2023年4月22日12:44:19

#include <iostream>
#include "define.h"
using namespace std;

Status CreateBiTree(BiTree& T) {
	scanf(&ch);
	if (ch == '#') T = NULL;
	else {
		if(!(T = (BiTNode*)malloc(sizeof(BiTNode)))
			exit(OVERFLOW);
		T->data = ch;   //生成根结点
			CreateBiTree(T->lchild);   //构造左子树
			CreateBiTree(T->rchild);   //构造右子树
	}
	return OK;
}
int main(int argc, char* argv[])
{

	system("PAUSE");
}
