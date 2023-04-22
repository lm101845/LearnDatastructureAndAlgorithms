//2023年4月22日13:15:23
#include <iostream>
#include "define.h"
using namespace std;

int Copy(BiTree T, BiTree& NewT) {
	if (T == NULL)  //如果是空树返回0
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
