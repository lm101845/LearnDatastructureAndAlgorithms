//2024年1月9日15:53:44
//p106页
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 100010;
bool hashTable[maxn] = { false };

int main()
{
	int n, m, x;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		hashTable[x] = true;    //数字x出现过——空间换时间
	}

	for (int i = 0; i < m; i++) {
		scanf("%d", &x);
		if (hashTable[x] == true) {   //如果数字x出现过，则输出YES
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	system("PAUSE");
}
