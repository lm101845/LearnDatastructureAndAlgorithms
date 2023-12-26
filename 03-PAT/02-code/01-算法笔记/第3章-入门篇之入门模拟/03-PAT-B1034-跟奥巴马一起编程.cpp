//2023年12月21日09:36:07

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
	int row, col;  //行，列
	char c;
	scanf_s("%d %c", &col, &c);   //输入列数、欲使用的字符(行数是列数的一半)
	if (col % 2 == 1) {
		row = col / 2 + 1;  //col为奇数，向上取整
	}
	else {
		row = col / 2;  //col为偶数
	}

	//第一行
	for (int i = 0; i < col; i++) {
		printf("%c", c);    //col个字符
	}
	printf("\n");

	//第2到row-1行
	for (int i = 2; i < row; i++) {
		printf("%c", c);   //每行的第一个字符c
		for (int j = 0; j < col - 2; j++) {
			printf(" ");   //col-2个空格
		}
		printf("%c\n", c);  //每行的最后一个字符c
	}

	//第row行
	for (int i = 0; i < col; i++) {
		printf("%c", c);
	}
}

int main()
{
	//test01();
	test02();
	system("PAUSE");
}
