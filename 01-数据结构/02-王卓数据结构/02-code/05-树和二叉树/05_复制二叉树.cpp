//2023��4��22��13:15:23
#include <iostream>
#include "define.h"
using namespace std;

int Copy(BiTree T, BiTree& NewT) {
	if (T == NULL)  //����ǿ�������0
	{
		NewT = NULL;
		return 0;
	}
	else
	{
		NewT = new BiTNode;
		NewT->data = T->data;
		Copy(T->lChild, NewT->lChild);
		Copy(T->rChild, NewT->rChild);
	}
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
