//2023年4月1日13:38:37

#include <iostream>
#include "define.h"
using namespace std;

//队列的定义
typedef struct SqQueue {
	QElemType* base;   //动态分配存储空间
	int front;   //头指针，若队列不空，则指向队列头元素
	int rear;    //尾指针，若队列不空，则指向队尾元素的下一个位置
} SqQueue;

//注意：
//SqQueue是普通类型，不是指针类型，所以用圆点，不用箭头
//这里front和rear并不是什么"指针"，而是表示数组元素的下标

//算法1：队列的初始化
Status InitQueue(SqQueue& Q)
{
	//Q.base = new QElemType[MAXSIZE];   //分配数组空间,C++写法
	Q.base = (QElemType*)malloc(MAXSIZE * sizeof(QElemType));   //C写法
	if (!Q.base) exit(OVERFLOW);   //存储分配失败
	Q.front = Q.rear = 0;   //头指针尾指针置为0，队列为空
}


//算法2：求队列的长度
int QueueLength(SqQueue Q)
{
	return ((Q.rear - Q.front + MAXSIZE) % MAXSIZE);   //牛皮！
}

//算法3：循环队列出队
Status DeQueue(SqQueue& Q, QElemType& e)
{
	if (Q.front == Q.rear) return ERROR;   //队空
	e = Q.base[Q.front];   //保存队头元素
	Q.front = (Q.front + 1) % MAXSIZE;   //队头指针 + 1
	return OK;
}

//算法4：循环队列入队
Status EnQueue(SqQueue& Q, QElemType& e)
{
	if ((Q.rear + 1) % MAXSIZE == Q.front) return ERROR;   //队满
	Q.base[Q.rear] = e;   //新元素加入队尾
	Q.rear = (Q.rear + 1) % MAXSIZE;
	return OK;
}


//算法5：取队头元素
SElemType GetHead(SqQueue Q)
{
	if (Q.front != Q.rear)   //队列不为空
		return Q.base[Q.front];  //返回队头指针元素的值，队头指针不变
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
