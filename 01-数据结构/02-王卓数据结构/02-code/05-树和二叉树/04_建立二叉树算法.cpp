//2023��4��22��12:44:19

#include <iostream>
#include "define.h"
using namespace std;

Status CreateBiTree(BiTree& T) {
	scanf(&ch);
	if (ch == '#') T = NULL;
	else {
		if(!(T = (BiTNode*)malloc(sizeof(BiTNode)))
			exit(OVERFLOW);
		T->data = ch;   //���ɸ����
			CreateBiTree(T->lchild);   //����������
			CreateBiTree(T->rchild);   //����������
	}
	return OK;
}
int main(int argc, char* argv[])
{

	system("PAUSE");
}
