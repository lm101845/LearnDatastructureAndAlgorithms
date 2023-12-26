//2023年12月7日09:48:32 

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//自做——不会。。。
//void test01()
//{
//	int total;
//	scanf("%d", &total);
//	//根据编号，把总分加起来
//	while (total--) {
//		scanf("")
//	}
//}


//答案——写不出来
const int maxn = 100010;
int school[maxn] = { 0 };   //记录每个学校的总分

void test02() {
	int n, schID, score;
	scanf_s("%d\n", &n);
	for (int i = 0; i < n; i++) {   //i从0开始
		scanf_s("%d%d", &schID, &score);   //学校ID,分数
		school[schID] += score;    //学校schID的总分增加score
	}

	int k = 1, MAX = -1;   //最高总分的学校ID以及其总分
	for (int i = 1; i <= n; i++) {   //i从1开始
		if (school[i] > MAX) {
			MAX = school[i];
			k = i;
		}
	}

	printf("%d %d\n", k, MAX);   //输出最高总分的学校ID及其总分
}

int main(int argc, char* argv[])
{
	//test01();
	test02();
	system("PAUSE");
}
