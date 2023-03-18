//2023年3月18日21:22:15

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "define.h"
#include "method.h" 
#include <iostream>
using namespace std;

typedef struct {
	ElemType *elem;   //存储空间基址
	int length;       //当前长度
	//int listsize;     //当前分配的存储容量(以sizeof(ElemType)为单位)
} SqList;  //顺序表类型


//算法1：线性表L的初始化(参数用引用)  
Status InitList_Sq(SqList &L)  //构造一个空的顺序表L
{
	L.elem = new ElemType[MaxSize];   //为顺序表分配空间(C++写法，更加简单)
	if (!L.elem) exit(OVERFLOW);      //存储分配失败
	L.length = 0;                     //空表长度为0
	return OK;
}

//算法2：销毁线性表L(线性表都不存在了)
void DestoryList(SqList& L)
{
	if (L.elem) delete L.elem;   //释放存储空间
}


//算法3：清空线性表L(线性表还在，只不过里面没有元素了)
void ClearList(SqList& L)
{
	L.length = 0;    //将线性表的长度置为0
}

//算法4：求线性表的长度
int GetLength(SqList L)
{
	return L.length;
}

//算法5：判断线性表是否为空
int IsEmpty(SqList L)
{
	if (L.length == 0) return 1;
	else return 0;
}

//算法6：顺序表的取值(根据位置i获取相应位置数据元素的内容)
int GetElem(SqList L, int i, ElemType& e)
{
	if (i <1 || i > L.length) return ERROR;  //判断i值是否合理，若不合理，返回ERROR
	e = L.elem[i - 1];
	return OK;
}

//算法7：顺序表的查找(在线性表L中查找与指定值e相同的数据元素的【位置】)
int LocateElem(SqList L, ElemType e)
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (L.elem[i] == e)  return i + 1;   //查找成功，返回序号
 	}
	return 0;   //查找失败，返回0
}

//算法8：线性表的插入 (书p24)
//1.判断插入位置i是否合法
//2.判断顺序表的存储空间是否已满，若已满返回ERROR
//3.将第n至第i位的元素依次向后移动一个位置，空出第i个位置
//4.将要插入的新元素e放入第i个位置
//5.表长加1，插入成功返回OK
Status ListInsert_Sq(SqList& L, int i, ElemType e)
{
	//在顺序线性表L中第i(用户眼中的i，第一个值是1，不是0)个位置之前插入新的元素e
	if (i < 1 || i > L.length + 1) return ERROR;   //插入位置i不合法
	if (L.length == MaxSize) return ERROR;     //当前存储空间已满(书上已满的话，没有直接报错，而是增加存储空间)
	for (int j = L.length - 1; j >= i - 1; j--)   //这里j是下标，所以是length-1
	{
		L.elem[j + 1] = L.elem[j];    //插入位置及之后的元素右移
	}
	L.elem[i - 1] = e;				//将新元素e放入第i个位置
	L.length++;    //表长增加1
}

//算法9：线性表的删除(书p24)
//1.判断删除位置i是否合法(合法值为1<=i<=n)
//2.将欲删除的元素保留在e中
//3.将第i+1至第n位的元素依次向前移动一个位置
//4.表长减1，删除成功返回OK
Status ListDelete_Sq(SqList& L, int i)
{
	if (i < 1 || i > L.length) return ERROR;   //i值不合法
	for (int j = i; j <= L.length - 1; j++)
	{
		L.elem[j - 1] = L.elem[j];
	}
	L.length--;
	return OK;
}
int main(int argc, char* argv[])
{
	system("PAUSE");
}
