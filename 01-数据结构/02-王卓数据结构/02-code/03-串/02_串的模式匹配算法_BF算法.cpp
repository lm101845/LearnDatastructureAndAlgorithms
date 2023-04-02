//2023年4月2日18:25:13

//朴素的模式匹配算法（Brute-Force算法，简称BF算法）
#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	char ch[MAXLEN + 1];   //存储串的一维数组
	int length;   //串的当前长度
}SString;

int index_BF(SString S, SString T)
{
	int i = 1, j = 1;
	//S是模式串，T是子串
	while (i <= S.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		//主串和子串依次匹配下一个字符
		{
			++i;
			++j; 
		}
		else {
			//比较不成功，进行回溯
			//字符串从1开始(位置0用于别的，不存放数据)
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length) return i - T.length;   //返回匹配的第一个字符的下标
	else return 0;   //模式匹配不成功(就算最后一次匹配不成功，j也会被赋值为1，注意看else语句)
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
