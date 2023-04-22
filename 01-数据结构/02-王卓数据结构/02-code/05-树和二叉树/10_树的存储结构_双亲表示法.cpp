//2023年4月22日17:39:51 

#include <iostream>
#include "define.h"
using namespace std;

typedef struct PTNode {
	TElemType data;
	int parent;   //双亲位置域
}PTNode;


typedef struct {
	PTNode nodes[MAXSIZE];
	int r, n;   //根结点的位置和结点个数
}PTree;
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
