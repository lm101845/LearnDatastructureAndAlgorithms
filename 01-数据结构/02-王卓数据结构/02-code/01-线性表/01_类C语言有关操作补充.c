//2023��3��18��18:07:55

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaxSize 10
#define ElemType int
//���������2�ַ�ʽ��
//1.���龲̬����
typedef struct {
	ElemType data[MaxSize];
	int length;
} SqList1;  //˳�������

//2.���鶯̬����
typedef struct {
	ElemType *data; 
	//ʹ��ָ�붨��һ�����飬��ʱ����Զ������ж�̬�����ڴ�
	//���ǻ���ȷ����С������*data���������ַ��Ȼ���ٺ��ʵ�ʹ������malloc���з���
	int length;
} SqList2;  //˳�������



int main()
{
	SqList2 L;
	L.data = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
	system("pause");
	return EXIT_SUCCESS;
}
