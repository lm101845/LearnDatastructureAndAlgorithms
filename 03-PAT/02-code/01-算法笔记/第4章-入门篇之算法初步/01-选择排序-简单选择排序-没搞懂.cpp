//2023年12月22日09:39:28

#include <iostream>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int n = 10; // 假设n的值为10
int A[10] = { 7,2, 9, 1, 3, 8, 4,5, 6, 10 }; // 假设A是一个包含10个元素的数组

void selectSort() {
	for (int i = 0; i < n; i++){    //进行n趟操作
		int k = i;  //在内层循环中固定死了
		for (int j = i; j < n; j++) {   //选出[i,n]中最小的元素，下标为k
			if (A[j] < A[k]) {
				printf("j为%d===k为%d====非常满足===前Aj < Ak=========\n", j, k);
				k = j;
				printf("j为%d===k为%d====非常满足===后Aj < Ak=========\n", j, k);
			}
			else {
				printf("j为%d===k为%d====不满足Aj < Ak=========\n", j, k);
			}
		}
		printf("交换完前k与i=========\n%d -%d\n", k, i);
		printf("交换完前A[k]与A[i]==========\n%d- %d\n", A[k], A[i]);
		int temp = A[i];   //交换A[k]与A[i]
		A[i] = A[k];
		A[k] = temp;
		printf("交换完后k与i==================\n%d- %d\n", k, i);
		printf("交换完后A[k]与A[i]=============%d -%d\n", A[k], A[i]);
	}
}


int main()
{
	selectSort();
	for (int i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	system("PAUSE");
}
