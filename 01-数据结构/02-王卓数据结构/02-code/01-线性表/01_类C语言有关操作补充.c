//2023年3月18日18:07:55

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaxSize 10
#define ElemType int
//定义数组的2种方式：
//1.数组静态分配
typedef struct {
	ElemType data[MaxSize];
	int length;
} SqList1;  //顺序表类型

//2.数组动态分配
typedef struct {
	ElemType *data; 
	//使用指针定义一个数组，到时候可以对它进行动态分配内存
	//我们还不确定大小，先用*data来代替基地址，然后再合适的使用再用malloc进行分配
	int length;
} SqList2;  //顺序表类型



int main()
{
	SqList2 L;
	L.data = (ElemType*)malloc(sizeof(ElemType) * MaxSize);
	system("pause");
	return EXIT_SUCCESS;
}
