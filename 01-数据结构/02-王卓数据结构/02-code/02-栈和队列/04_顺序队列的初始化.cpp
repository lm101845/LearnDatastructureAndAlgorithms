//2023��4��1��13:38:37

#include <iostream>
#include "define.h"
using namespace std;

//���еĶ���
typedef struct SqQueue {
	QElemType* base;   //��̬����洢�ռ�
	int front;   //ͷָ�룬�����в��գ���ָ�����ͷԪ��
	int rear;    //βָ�룬�����в��գ���ָ���βԪ�ص���һ��λ��
} SqQueue;

//ע�⣺
//SqQueue����ͨ���ͣ�����ָ�����ͣ�������Բ�㣬���ü�ͷ
//����front��rear������ʲô"ָ��"�����Ǳ�ʾ����Ԫ�ص��±�

//�㷨1�����еĳ�ʼ��
Status InitQueue(SqQueue& Q)
{
	//Q.base = new QElemType[MAXSIZE];   //��������ռ�,C++д��
	Q.base = (QElemType*)malloc(MAXSIZE * sizeof(QElemType));   //Cд��
	if (!Q.base) exit(OVERFLOW);   //�洢����ʧ��
	Q.front = Q.rear = 0;   //ͷָ��βָ����Ϊ0������Ϊ��
}


//�㷨2������еĳ���
int QueueLength(SqQueue Q)
{
	return ((Q.rear - Q.front + MAXSIZE) % MAXSIZE);   //ţƤ��
}

//�㷨3��ѭ�����г���
Status DeQueue(SqQueue& Q, QElemType& e)
{
	if (Q.front == Q.rear) return ERROR;   //�ӿ�
	e = Q.base[Q.front];   //�����ͷԪ��
	Q.front = (Q.front + 1) % MAXSIZE;   //��ͷָ�� + 1
	return OK;
}

//�㷨4��ѭ���������
Status EnQueue(SqQueue& Q, QElemType& e)
{
	if ((Q.rear + 1) % MAXSIZE == Q.front) return ERROR;   //����
	Q.base[Q.rear] = e;   //��Ԫ�ؼ����β
	Q.rear = (Q.rear + 1) % MAXSIZE;
	return OK;
}


//�㷨5��ȡ��ͷԪ��
SElemType GetHead(SqQueue Q)
{
	if (Q.front != Q.rear)   //���в�Ϊ��
		return Q.base[Q.front];  //���ض�ͷָ��Ԫ�ص�ֵ����ͷָ�벻��
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
