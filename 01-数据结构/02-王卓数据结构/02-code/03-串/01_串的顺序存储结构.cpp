//2023年4月1日19:21:39

#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	char ch[MAXLEN + 1];   //存储串的一维数组
	int length;   //串的当前长度
}SString;

typedef struct Chunk {
	char ch[CHUNKSIZE];
	struct Chunk* next;
} Chunk;

typedef struct {
	Chunk* head, * tail;   //串的头指针和尾指针
	int curlen;  //串的当前长度
}LString;   //字符串的块链结构
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
