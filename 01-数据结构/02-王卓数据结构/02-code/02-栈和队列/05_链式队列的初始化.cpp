//2023年4月1日14:18:03

#include <iostream>
#include "define.h"
using namespace std;

//链队列的定义
//Qnode是结构体的名称，QNode是结构体的别名，两者是等价的。
//而QueuePtr是QNode*的别名，表示指向QNode结构体的指针类型。
typedef struct Qnode
{
	QElemType data;
	struct Qnode* next;
}QNode,*QueuePtr;

typedef struct {
	QueuePtr front;   //队头指针
	QueuePtr rear;    //队尾指针
} LinkQueue;


//算法1：链队列初始化
Status InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front) exit(OVERFLOW);
	Q.front->next = NULL;
	return OK;
}

//算法2：销毁链队列
Status DestroyQueue(LinkQueue& Q)
{
	while (Q.front) {
		QueuePtr p = Q.front->next;   //先把下一个结点找一个地方先存着
		free(Q.front);
		Q.front = p;
	}
}

//算法3：将元素e入队
Status EnQueue(LinkQueue& Q, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if (!p) exit(OVERFLOW);
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
}

//算法4：链队列出队
Status DeQueue(LinkQueue& Q, QElemType& e)
{
	if (Q.front == Q.rear) return ERROR;
	QueuePtr p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear == p) Q.rear = Q.front;
	//如果我们删除的恰好是尾结点，此时我们不仅要修改头指针，还要修改尾指针
	delete p;
	return OK;
}

//算法5：求链队列的队头元素
Status GetHead(LinkQueue Q, QElemType& e)
{
	if (Q.front == Q.rear) return ERROR;
	e = Q.front->next->data;  //队头元素就在头结点的下一个元素上存放着呢
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
