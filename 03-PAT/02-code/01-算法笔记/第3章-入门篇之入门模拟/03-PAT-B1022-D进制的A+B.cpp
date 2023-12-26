//2023年12月21日14:31:20

#include <iostream>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//不看答案自做
void test01()
{

}

//答案
void test02()
{
	int a, b, d;
	scanf_s("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;   //ans存放D进制的每一位
	do {   //进制转换
		ans[num++] = sum % d;   //先计算，再++
		sum /= d;
	} while (sum != 0);

	for (int i = num - 1; i >= 0; i--) {
		printf("%d", ans[i]);
	}
}

int main()
{
	//test01();
	test02();
	system("PAUSE");
}
