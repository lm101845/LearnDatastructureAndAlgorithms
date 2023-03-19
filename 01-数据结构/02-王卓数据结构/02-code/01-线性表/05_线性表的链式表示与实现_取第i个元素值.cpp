//2023��3��19��14:05:17

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//�㷨���裺
//1.�ӵ�1�����(L->next)˳��ɨ�裬��ָ��pָ��ǰɨ��Ľ�㣬p��ֵp=L->next
//2.j�����������ۼƵ�ǰɨ����Ľ������j��ֵΪ1
//3.��pָ��ɨ�赽����һ���ʱ��������j��1
//4.��j == iʱ��p��ָ�Ľ�����Ҫ�ҵĵ�i�����
Status GetElem_L(LinkList L, int i, ElemType& e)  
//��ȡ���Ա�L��ĳ��Ԫ�ص����ݣ�ͨ������e����
{
	LNode* p = L->next;
	int j = 1; 
	//��ʼ��
	while (p && j < i)
		//ѭ����j = i,��˼���ǵ�j=iʱ����ѭ������ʱָ������ָ���i����㣬������ȡ��
	{
		//˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
		p = p->next;
		++j;
	}
	if (!p || j > i) return ERROR;  //��i��Ԫ�ز�����
	e = p->data;   //ȡ��i��Ԫ��
	return OK;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
