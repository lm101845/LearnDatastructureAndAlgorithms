//2023��4��16��10:51:53

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
//��������������㷨
Status PreOrderTraverse(BiTree T) {
	if (T == NULL) return OK;   //�ն�����
	else {
		visit(T);   //���ʸ����
		PreOrderTraverse(T->lchild);   //�ݹ����������
		//visit(T);   //���ʸ����   �����������visit���������м伴�ɣ�������д����󼴿�
		PreOrderTraverse(T->rchild);   //�ݹ����������
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
