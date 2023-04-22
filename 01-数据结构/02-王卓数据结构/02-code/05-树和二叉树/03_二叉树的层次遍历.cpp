//2023��4��22��12:25:48
#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	BTNode data[MAXSIZE];    //��Ŷ���Ԫ��
	int front, rear;		 //��ͷ�Ͷ�βָ��
} SqQueue;     //˳��ѭ����������
 
//α���룬�޷�����
void LevelOrder(BTNode* b) {
	BTNode* p;
	SqQueue* qu;
	initQueue(qu);  //��ʼ������
	enQueue(qu, b);	//�����ָ��������
	while (!QueueEmpty(qu)) {    //�Ӳ�Ϊ�գ���ѭ��
		deQueue(qu, p);			//���ӽ��p
		printf("%c", p->data);  //���ʽ��p
		if (p->lchild != NULL) enQueue(qu, p->lchild);   //������ʱ�������
		if (p->rchild != NULL) enQueue(qu, p->rchild);   //���Һ���ʱ�������
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
