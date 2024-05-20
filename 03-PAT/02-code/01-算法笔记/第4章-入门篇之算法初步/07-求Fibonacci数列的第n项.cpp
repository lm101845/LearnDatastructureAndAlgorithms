//2024年1月12日15:08:47

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int F(int n) {
	if (n == 0 || n == 1) return 1;   //递归边界
	else return F(n - 1) + F(n - 2);  //递归式
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", F(n));
	system("PAUSE");
}
