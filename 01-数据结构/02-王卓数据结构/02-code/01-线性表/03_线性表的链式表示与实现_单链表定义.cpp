//2023��3��19��08:21:22

#include <iostream>
#include "define.h"
using namespace std;

typedef struct LNode {      //�����������ͺ�ָ�����ָ������
	ElemType data;			//��������Դ
	struct LNode* next;     //����ָ����
} LNode,*LinkList;
//��������L�� LinkList L;
//������ָ��p�� LNode *p <==> LinkList p;  //��Ϊp��������ָ���������͵�ָ��
//Ϊ����߳���Ŀɶ��ԣ��ڴ˶�ͬһ���ṹ��ָ����������2�����ƣ�LNode*��LinkList,���߱������ǵȼ۵�

//����˵LinkList Lָ������������˼��ֻҪ�㶨����ͷָ��
//(���������ɱ�ͷΨһȷ������Ϊ�����������ͷָ�����������������ͷָ������L����������Ϊ��L)��
//��ô��Ϳ��Ը���ͷָ�룬ȷ����������

/**
������ڴ���һƬ���û�����Ĵ洢�ռ䣬ֻ��һ����ַ����ʾ���Ĵ��ڣ�û����ʽ�����ƣ�
������ǻ��ڷ���������ռ�ʱ����һ��ָ�룬���洢��Ƭ�ռ�ĵ�ַ(�������ͨ�׽���ָ��ָ����)
���ҳ������ָ�����������Ϊ��������
*/

//����1����������һ��ѧ��������
typedef struct student {
	char num[8];   //������
	char name[8];   //������
	int score;     //������
	struct student* next;   //ָ����
} LNode, * LinkList;

//����2��(Ϊ��ͳһ����Ĳ���������ͨ����������)
//����2�õĸ���һЩ
typedef struct {
	char num[8];   //������
	char name[8];   //������
	int score;     //������
} ElemType;

typedef struct Lnode {
	ElemType data;  //������
	struct Lnode* next;   //ָ����
} Lnode,*LinkList;

int main(int argc, char* argv[])
{

	system("PAUSE");
}
