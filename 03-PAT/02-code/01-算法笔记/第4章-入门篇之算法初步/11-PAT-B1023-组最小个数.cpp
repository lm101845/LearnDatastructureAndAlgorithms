//2024年1月22日15:03:37

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;


int main()
{	
	int count[10];   //记录数字0-9的个数
	for (int i = 0; i < 10; i++) {
		scanf("%d", &count[i]);
	}
	 
	//先找一个特例
	for (int i = 1; i < 10; i++) {   //从1-9中选择count不为0的最小数字
		if (count[i] > 0) {
			printf("%d", i);
			count[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {   //从0-9输出对应个数的数字
		for (int j = 0; j < count[i]; j++) {
			printf("%d", i);
		}
	}
	system("PAUSE");
}
