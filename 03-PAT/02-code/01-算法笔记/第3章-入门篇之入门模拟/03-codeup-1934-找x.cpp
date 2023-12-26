//2023年12月7日10:36:31

#include <iostream>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//不看答案自做
const int maxn = 200;
int set[maxn] = { 0 };
int test01()
{
	int n,num,target = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num);
		set[i] = num;
	}

	scanf_s("%d", &target);
	for (int i = 0; i < n; i++) {
		if (target == set[i]) {
			return i;
			break;
		}
	}
	return -1;
}

//答案
void test02()
{

}

int main()
{
	printf("%d", test01());
	//test02();
	system("PAUSE");
}
