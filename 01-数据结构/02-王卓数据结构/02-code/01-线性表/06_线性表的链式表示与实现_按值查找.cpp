//2023��3��19��14:29:24

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode, * LinkList;

//��ֵ����1������ָ�����ݻ�ȡ��λ�����ڵ�λ��/��ַ
//1.�ӵ�1����������κ�e��Ƚ�
//2.����ҵ�һ����ֵ��e��ȵ�����Ԫ�أ��򷵻����������е�"λ��"���ַ
//3.��������������û���ҵ���ֵ��e��ȵ�Ԫ�أ��򷵻�0��"NULL"

LNode* LocateElem_L(LinkList L, ElemType e)
//���ﺯ������ֵ�����ǵ�ַ��ָ�룬���Զ���ĵط���*
{
	LNode * p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}
 
//��ֵ����2������ָ�����ݻ�ȡ������λ�����
int LocateElem_L2(LinkList L, ElemType e)
//����L��ֵΪe������Ԫ�ص�λ����ţ�����ʧ�ܷ���0
{
	LNode* p = L->next; 
	int j = 1;
	while (p && p->data != e)
	{
		p = p->next;
		++j;
	}
	if (p)
		return j;
	else
		return 0;
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
