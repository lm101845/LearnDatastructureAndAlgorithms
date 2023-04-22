//2023年4月22日13:36:54
#include <iostream>
using namespace std;


int LeafCount(BiTree T) {
	if (T == NULL)
		return 0;
	if (T->lchild == NULL && T->rchild == NULL)
		return 1;   //如果是叶子结点返回1
	else
		return LeafCount(T->lchild) + LeafCount(T->rchild);
}
int main(int argc, char* argv[])
{

	system("PAUSE");
}
