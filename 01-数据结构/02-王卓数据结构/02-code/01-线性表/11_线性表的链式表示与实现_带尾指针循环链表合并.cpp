//2023��3��22��12:13:36

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//��βָ��ѭ������ĺϲ�(��Tb�ϲ���Ta֮��)
//�㷨���裺
//1.p���ͷ���
//2.Tb��ͷ���ӵ�Ta��β
//3.�ͷ�Tb��ͷ���
//4.�޸�ָ��
LinkList Connect(LinkList Ta, LinkList Tb)
//����Ta,Tb���Ƿǿյĵ�ѭ������
{
	LNode* p = Ta->next;   //p���ͷ���
	Ta->next = Tb->next->next;  //Tb��ͷ���ӵ�Ta��β
	delete Tb->next;    //�ͷ�Tb��ͷ���
	Tb->next = p;       //�޸�ָ��
	return Tb;   //��Ϊreturn�ˣ����Բ������ô�ȡ��ַ������
}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
