//2023��2��18��09:10:15
//https://blog.csdn.net/wowocpp/article/details/119784178
#define _CRT_SECURE_NO_WARNINGS
#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
#define LISTINCREMENT 2 /* ���Ա�洢�ռ�ķ������� */
#define OVERFLOW -2     /*��Ϊ��math.h���Ѷ���OVERFLOW��ֵΪ3,��ȥ������*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef int ElemType;
typedef int Status;  /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef struct
{
	ElemType* elem;  /* �洢�ռ��ַ */
	int length;      /* ��ǰ���� */
	int listsize;    /* ��ǰ����Ĵ洢����(��sizeof(ElemType)Ϊ��λ) */
} SqList;


//�����Ա���
/* ��ʼ������˳�����Ա�L�Ѵ��ڡ��������������L������Ԫ�ظ��� */
int ListLength(SqList L)
{
	return L.length;
}

//��ȡ���Ա�Ԫ�ص�i��λ�õ�Ԫ��
Status GetElem(SqList L, int i, ElemType* e)
{
	/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L) */
   /* �����������e����L�е�i������Ԫ�ص�ֵ */
	if (i < 1 || i > L.length)
		exit(ERROR);
	*e = *(L.elem + i - 1);
	return OK;
}

Status equal(ElemType c1, ElemType c2) /* ����Ԫ���ж�����(�ж����) */
{
	if (c1 == c2)
		return TRUE;
	else
		return FALSE;
}

/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�equal()������Ԫ���ж�����(����Ϊ1,����Ϊ0) */
/* �������������L�е�1����e�����ϵequal()������Ԫ�ص�λ�� */
/* ������������Ԫ�ز����ڣ��򷵻�ֵΪ0��*/
int LocateElem(SqList L, ElemType e, Status(*equal)(ElemType, ElemType))
{
	ElemType* p;
	int i = 1;    /* i�ĳ�ֵΪ��1��Ԫ�ص�λ�� */
	p = L.elem;   /* p�ĳ�ֵΪ��1��Ԫ�صĴ洢λ�� */
	while (i <= L.length && !equal(*p++, e))  //*p++:�Ƚ�����*p���ݸ�������Ȼ�������ֵ�ټ�1
		++i;
	if (i <= L.length)
		return i;
	else
		return 0;
}

Status ListInsert(SqList* L, int i, ElemType e)
{
	/* ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��ListLength(L)+1 */
   /* �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1 */
	ElemType* newbase, * q, * p;
	if (i < 1 || i >(*L).length + 1) /* iֵ���Ϸ� */
		return ERROR;
	if ((*L).length >= (*L).listsize)  /* ��ǰ�洢�ռ�����,���ӷ��� */
	{
		newbase = (ElemType*)realloc((*L).elem, ((*L).listsize + LISTINCREMENT) * sizeof(ElemType));
		//�Բ�realloc��malloc����������
		if (!newbase)
			exit(OVERFLOW);   /* �洢����ʧ�� */
		(*L).elem = newbase;   /* �»�ַ */
		(*L).listsize += LISTINCREMENT; /* ���Ӵ洢���� */
	}
	q = (*L).elem + i - 1; /* qΪ����λ�� */
	for (p = (*L).elem + (*L).length - 1; p >= q; --p) /* ����λ�ü�֮���Ԫ������ */
		*(p + 1) = *p;
	*q = e; /* ����e */
	++(*L).length; /* ����1 */
	return OK;
}

//�����������Ա�Lb�е�����La�е�����Ԫ�ز��뵽La��(�󼯺�A�뼯��B�Ĳ���)
//��Ϊ�����Ա�LaҪ���в������(��������B - AB��Ԫ�ص����Ա�La��ȥ������La��ָ�룬Lb����Ҫ)
void Union(SqList* La, SqList Lb)
{
	ElemType e;  //�������Ա�����Ķ�������,int����
	int La_len, Lb_len;
	int i;
	La_len = ListLength(*La);   /* �����Ա�ĳ��� */
	Lb_len = ListLength(Lb);
	for (i = 0; i < Lb_len; i++)
	{
		GetElem(Lb, i, &e);  /* ȡLb�е�i������Ԫ�ظ���e */
		if(!LocateElem(*La,e, equal))  /* La�в����ں�e��ͬ��Ԫ��,�����֮ */
			ListInsert(La, ++La_len, e);
	}
}


int main()
{
	SqList La;
	SqList Lb;
	La.elem = NULL;
	La.length = 5;
	La.listsize = 20;

	system("pause");
	return EXIT_SUCCESS;
}
