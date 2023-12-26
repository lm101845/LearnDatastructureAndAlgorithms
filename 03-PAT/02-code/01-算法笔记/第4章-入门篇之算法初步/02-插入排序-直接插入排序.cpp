//2023年12月22日11:15:44

#include <iostream>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int n = 10; // 假设n的值为10
int A[10] = { 7,2, 9, 1, 3, 8, 44,5, 6, 10 };   //n为元素个数，数组下标为0~n-1
void insertSort() {
	for (int i = 0; i < n; i++) {   //进行n-1趟排序
		int temp = A[i], j = i;   //temp临时存放A[i],j从i开始往前枚举
		while (j > 0 && temp < A[j - 1]) {
			printf("满足这个条件");
			A[j] = A[j - 1];   //把A[j-1]后移一位至A[j]
			j--;
		}
		printf("不满足上述条件");
		A[j] = temp;    //插入位置为j
		printf("一轮循环结束,i = %d\n", i);
		printf("一轮循环结束,j = %d\n",j);
	}
}


int main()
{
	insertSort();
	for (int i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	system("PAUSE");
}
