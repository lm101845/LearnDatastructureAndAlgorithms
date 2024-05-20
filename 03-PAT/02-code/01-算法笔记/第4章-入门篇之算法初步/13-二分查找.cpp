//2024年1月23日13:59:51

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

//A[]为严格递增序列，left为二分下界，right为二分上界，x为待查找的数
//二分区间为左闭右闭的[left, right]，传入的初值为[0, n-1]
int binarySearch(int A[], int left, int right, int x)
{
	int mid; //mid为left和right的中点
	while (left <= right)
	{
		mid = (left + right) / 2; //取中点
		//如果二分上界超过int型数据类型的一半，那么left+right可能会溢出，所以改为left+(right-left)/2
		if (A[mid] == x)
			return mid; //找到x，返回下标
		else if (A[mid] > x)
			right = mid - 1; //x在左区间，更新right
		else
			left = mid + 1; //x在右区间，更新left
	}
	return -1; //查找失败，返回-1
}
int main()
{
	const int n = 10;
	int A[n] = { 1,3,4,6,7,8,10,15,8 };
	printf("%d %d\n", binarySearch(A, 0, n - 1, 7), binarySearch(A, 0, n - 1, 9));
	system("PAUSE");
}
