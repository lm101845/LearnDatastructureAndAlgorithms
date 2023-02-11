//2023年1月30日21:04:51

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//C语言实现链表
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
	 * malloc是一个函数，专门用来从堆上分配内存
	 * malloc函数的返回值是一个void类型的指针，参数为int类型的数据，
	   即申请分配的内存大小，单位是字节。内存 分配成功之后，malloc函数返回这块内存的首地址，
	   你需要一个指针来接受这个地址。也就是说这块内存将来要 用来存储什么类型的数据，如：
　　		char *p = （char *）malloc（100）
	 */

	//A->next = B;  B->next=C

	system("pause");
	return EXIT_SUCCESS;
}
