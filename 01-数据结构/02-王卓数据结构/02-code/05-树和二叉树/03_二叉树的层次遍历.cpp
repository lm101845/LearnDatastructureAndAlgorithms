//2023年4月22日12:25:48
#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	BTNode data[MAXSIZE];    //存放队中元素
	int front, rear;		 //队头和队尾指针
} SqQueue;     //顺序循环队列类型
 
//伪代码，无法运行
void LevelOrder(BTNode* b) {
	BTNode* p;
	SqQueue* qu;
	initQueue(qu);  //初始化队列
	enQueue(qu, b);	//根结点指针进入队列
	while (!QueueEmpty(qu)) {    //队不为空，则循环
		deQueue(qu, p);			//出队结点p
		printf("%c", p->data);  //访问结点p
		if (p->lchild != NULL) enQueue(qu, p->lchild);   //有左孩子时将其入队
		if (p->rchild != NULL) enQueue(qu, p->rchild);   //有右孩子时将其入队
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
