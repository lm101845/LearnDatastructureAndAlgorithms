//2023��4��22��13:21:00

#include <iostream>
using namespace std;


int NodeCount(BiTree T) {
	if (T == NULL) 
		return 0;
	else
		return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
