//2023年4月16日10:51:53

#include <iostream>
#include "define.h"
using namespace std;

typedef char BitreeElemType;
typedef struct __BiNode {
	BitreeElemType data;
	__BiNode* lchild, * rchild;
} BiNode, * BiTree;

void visit(BiTree T)

{

	cout << T->data << " ";
}
//二叉树先序遍历算法
Status PreOrderTraverse(BiTree T) {
	if (T == NULL) return OK;   //空二叉树
	else {
		visit(T);   //访问根结点
		PreOrderTraverse(T->lchild);   //递归遍历左子树
		//visit(T);   //访问根结点   中序遍历，把visit函数放在中间即可，后序则写在最后即可
		PreOrderTraverse(T->rchild);   //递归遍历右子树
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
