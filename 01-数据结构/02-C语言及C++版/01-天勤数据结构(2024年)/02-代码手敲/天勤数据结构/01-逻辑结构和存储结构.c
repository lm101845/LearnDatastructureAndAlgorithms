//2023��1��30��21:04:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//C����ʵ������
int main()
{
	typedef struct LNode
	{
		int data;
		struct LNode* next;
	}LNode;
	LNode* L;
	L = (LNode*)malloc(sizeof(LNode));
	/**
	 * malloc��һ��������ר�������Ӷ��Ϸ����ڴ�
	 * malloc�����ķ���ֵ��һ��void���͵�ָ�룬����Ϊint���͵����ݣ�
	   �����������ڴ��С����λ���ֽڡ��ڴ� ����ɹ�֮��malloc������������ڴ���׵�ַ��
	   ����Ҫһ��ָ�������������ַ��Ҳ����˵����ڴ潫��Ҫ �����洢ʲô���͵����ݣ��磺
����		char *p = ��char *��malloc��100��
	 */

	//A->next = B;  B->next=C

	system("pause");
	return EXIT_SUCCESS;
}
