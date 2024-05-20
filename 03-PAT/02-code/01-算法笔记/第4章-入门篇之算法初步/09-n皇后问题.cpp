//2024年1月12日16:54:28

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int num = 0;
const int maxn = 11;
int n, P[maxn], hashTable[maxn] = { false };
void generateP(int index) {
	if (index == n + 1) {   //递归边界，生成一个排列
		bool flag = true;   //flag为true表示当前排列为一个合法方案
		for (int i = 1; i <= n; i++) {   //遍历任意2个皇后
			for (int j = 1; j <= n; j++) {
				if (abs(i - j) == abs(P[i] - P[j])) {  //如果在一条对角线上
					flag = false;   //不合法
				}
			}
		}
		if (flag) num++;   //若当前方案合法，令count加1
		return;
	}

	for (int x = 1; x <= n; x++) {
		if (hashTable[x] == false) {
			P[index] = x;
			hashTable[x] = true;
			generateP(index + 1);
			hashTable[x] = false;
		}
	}

	printf("%d\n", num);
}

int main()
{
	n = 8;    
	generateP(8);  
	system("PAUSE");
}
