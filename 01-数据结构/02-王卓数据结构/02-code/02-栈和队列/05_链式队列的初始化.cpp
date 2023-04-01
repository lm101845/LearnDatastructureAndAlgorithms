//2023��4��1��14:18:03

#include <iostream>
#include "define.h"
using namespace std;

//�����еĶ���
//Qnode�ǽṹ������ƣ�QNode�ǽṹ��ı����������ǵȼ۵ġ�
//��QueuePtr��QNode*�ı�������ʾָ��QNode�ṹ���ָ�����͡�
typedef struct Qnode
{
	QElemType data;
	struct Qnode* next;
}QNode,*QueuePtr;

typedef struct {
	QueuePtr front;   //��ͷָ��
	QueuePtr rear;    //��βָ��
} LinkQueue;


//�㷨1�������г�ʼ��
Status InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front) exit(OVERFLOW);
	Q.front->next = NULL;
	return OK;
}

//�㷨2������������
Status DestroyQueue(LinkQueue& Q)
{
	while (Q.front) {
		QueuePtr p = Q.front->next;   //�Ȱ���һ�������һ���ط��ȴ���
		free(Q.front);
		Q.front = p;
	}
}

//�㷨3����Ԫ��e���
Status EnQueue(LinkQueue& Q, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if (!p) exit(OVERFLOW);
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
}

//�㷨4�������г���
Status DeQueue(LinkQueue& Q, QElemType& e)
{
	if (Q.front == Q.rear) return ERROR;
	QueuePtr p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear == p) Q.rear = Q.front;
	//�������ɾ����ǡ����β��㣬��ʱ���ǲ���Ҫ�޸�ͷָ�룬��Ҫ�޸�βָ��
	delete p;
	return OK;
}

//�㷨5���������еĶ�ͷԪ��
Status GetHead(LinkQueue Q, QElemType& e)
{
	if (Q.front == Q.rear) return ERROR;
	e = Q.front->next->data;  //��ͷԪ�ؾ���ͷ������һ��Ԫ���ϴ������
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
