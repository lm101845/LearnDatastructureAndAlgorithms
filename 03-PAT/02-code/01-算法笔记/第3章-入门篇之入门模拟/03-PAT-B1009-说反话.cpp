//2023年12月21日15:52:18

#include <iostream>
#include <cstdio>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//不看答案自做
void test01()
{

}

//答案
void test02()
{
	char str[90];  
	gets_s(str);
	int len = strlen(str), r = 0, h = 0;   //r为行，h为列
	char ans[90][90];   //ans[0]-ans[r]存放单词
	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {   //如果不是空格，则存放至ans[r][h]，并令h++
			ans[r][h++] = str[i];
		}else {    //如果是空格，说明一个单词结束，行r增加1，列h恢复至0
			ans[r][h] = '\0';     //末尾是结束符\0
			r++;
			h = 0;
		}
	}

	for (int i = r; i >= 0; i--) {   //倒着输出单词即可
		printf("%s", ans[i]);
		if (i > 0) {
			printf(" ");
		}
	}
}

int main()
{
	//test01();
	test02();
	system("PAUSE");
}
