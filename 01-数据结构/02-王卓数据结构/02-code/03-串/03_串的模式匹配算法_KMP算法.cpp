//2023年4月2日20:40:413

#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	char ch[MAXLEN + 1];   //存储串的一维数组
	int length;   //串的当前长度
}SString;

void GetNext(SString T, int* next) {
	next[1] = 0;
	int j = 0;
	int i = 1;
	while (i < T.length) {
		if (0 == j || T.ch[i] == T.ch[j]) {
			i++, j++;
			next[i] = j;
		}
		else {
			j = next[j];
		}
	}
}

int index_KMP(SString S, SString T,int pos)
{
	int* next = (int*)malloc(sizeof(int) * (T.length + 1));
	GetNext(T, next);
	int i = pos, j = 1;
	//S是模式串，T是子串
	while (i < S.length && j < T.length)
	{
		if (j == 0 || S.ch[i] == T.ch[j])
		//主串和子串依次匹配下一个字符
		{
			++i;
			++j;
		}
		else {
			j = next[j];  //i不变，j后退
		}
	}
	if (j > T.length) return i - T.length;   //匹配成功
	else return 0;   //模式匹配不成功(就算最后一次匹配不成功，j也会被赋值为1，注意看else语句)
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
