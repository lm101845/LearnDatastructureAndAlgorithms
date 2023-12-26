//2023年12月7日09:30:52
#include <iostream>
#include <cstdio>
using namespace std;

//自己不看答案手写
void test01()
{
	int n, j = 0;
	scanf_s("%d", &n);
	if (n > 1000) return;
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = (3 * n + 1) / 2;
		}
		j++;  //写错了，应该写在while循环外面的
	}
	printf("j=%d", j);
}

//答案
void test02()
{
	int n, step = 0;
	scanf_s("%d", &n);
	while (n != 1) {
		if (n % 2 == 0) n = n / 2;
		else n = (3 * n + 1) / 2;
		step++;
	}
	printf("%d\n", step);
}
int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
