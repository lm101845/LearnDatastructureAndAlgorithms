//2024年1月12日14:59:35

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int F(int n) {
	if (n == 0) return 1;   //当到达递归边界F(0)时，返回F(0) == 1
	else return F(n - 1) * n;   //没有达到递归边界时，使用递归式递归下去
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", F(n));
	system("PAUSE");
}
