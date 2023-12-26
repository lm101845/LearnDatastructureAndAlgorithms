//2023年12月21日14:51:24

#include <iostream>
#include <cstdio>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

const int maxn = 256;

//判断字符串str是否是"回文串"
bool judge(char str[]) {
	int len = strlen(str);  //字符串长度
	for (int i = 0; i < len / 2; i++) {   //i枚举字符串的前一半
		if (str[i] != str[len - 1 - i]) {   //如果对称位置不同
			return false;   //不是回文串
		}
	}
	return true;   //是回文串
}

//不看答案自做
void test01()
{

}

//答案
void test02()
{
	char str[maxn];
	while (gets_s(str)) {   //输入字符串
		bool flag = judge(str);
		if (flag == true) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}

int main()
{
	//test01();
	test02();
	system("PAUSE");
}
