//2023年2月18日09:10:15
//https://blog.csdn.net/wowocpp/article/details/119784178
#define _CRT_SECURE_NO_WARNINGS
#define ERROR 0
#define OK 1
#define TRUE 1
#define FALSE 0
#define LISTINCREMENT 2 /* 线性表存储空间的分配增量 */
#define OVERFLOW -2     /*因为在math.h中已定义OVERFLOW的值为3,故去掉此行*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef int ElemType;
typedef int Status;  /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef struct
{
	ElemType* elem;  /* 存储空间基址 */
	int length;      /* 当前长度 */
	int listsize;    /* 当前分配的存储容量(以sizeof(ElemType)为单位) */
} SqList;


//求线性表长度
/* 初始条件：顺序线性表L已存在。操作结果：返回L中数据元素个数 */
int ListLength(SqList L)
{
	return L.length;
}

//获取线性表元素第i个位置的元素
Status GetElem(SqList L, int i, ElemType* e)
{
	/* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L) */
   /* 操作结果：用e返回L中第i个数据元素的值 */
	if (i < 1 || i > L.length)
		exit(ERROR);
	*e = *(L.elem + i - 1);
	return OK;
}

Status equal(ElemType c1, ElemType c2) /* 数据元素判定函数(判定相等) */
{
	if (c1 == c2)
		return TRUE;
	else
		return FALSE;
}

/* 初始条件：顺序线性表L已存在，equal()是数据元素判定函数(满足为1,否则为0) */
/* 操作结果：返回L中第1个与e满足关系equal()的数据元素的位序。 */
/* 若这样的数据元素不存在，则返回值为0。*/
int LocateElem(SqList L, ElemType e, Status(*equal)(ElemType, ElemType))
{
	ElemType* p;
	int i = 1;    /* i的初值为第1个元素的位序 */
	p = L.elem;   /* p的初值为第1个元素的存储位置 */
	while (i <= L.length && !equal(*p++, e))  //*p++:先将参数*p传递给函数，然后参数的值再加1
		++i;
	if (i <= L.length)
		return i;
	else
		return 0;
}

Status ListInsert(SqList* L, int i, ElemType e)
{
	/* 初始条件：顺序线性表L已存在，1≤i≤ListLength(L)+1 */
   /* 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
	ElemType* newbase, * q, * p;
	if (i < 1 || i >(*L).length + 1) /* i值不合法 */
		return ERROR;
	if ((*L).length >= (*L).listsize)  /* 当前存储空间已满,增加分配 */
	{
		newbase = (ElemType*)realloc((*L).elem, ((*L).listsize + LISTINCREMENT) * sizeof(ElemType));
		//自查realloc和malloc函数的区别
		if (!newbase)
			exit(OVERFLOW);   /* 存储分配失败 */
		(*L).elem = newbase;   /* 新基址 */
		(*L).listsize += LISTINCREMENT; /* 增加存储容量 */
	}
	q = (*L).elem + i - 1; /* q为插入位置 */
	for (p = (*L).elem + (*L).length - 1; p >= q; --p) /* 插入位置及之后的元素右移 */
		*(p + 1) = *p;
	*q = e; /* 插入e */
	++(*L).length; /* 表长增1 */
	return OK;
}

//将所有在线性表Lb中但不在La中的数据元素插入到La中(求集合A与集合B的并集)
//因为对线性表La要进行插入操作(插入所有B - AB的元素到线性表La中去，所以La加指针，Lb不需要)
void Union(SqList* La, SqList Lb)
{
	ElemType e;  //假设线性表里面的都是数字,int类型
	int La_len, Lb_len;
	int i;
	La_len = ListLength(*La);   /* 求线性表的长度 */
	Lb_len = ListLength(Lb);
	for (i = 0; i < Lb_len; i++)
	{
		GetElem(Lb, i, &e);  /* 取Lb中第i个数据元素赋给e */
		if(!LocateElem(*La,e, equal))  /* La中不存在和e相同的元素,则插入之 */
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
