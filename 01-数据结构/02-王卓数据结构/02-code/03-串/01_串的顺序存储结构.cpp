//2023��4��1��19:21:39

#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	char ch[MAXLEN + 1];   //�洢����һά����
	int length;   //���ĵ�ǰ����
}SString;

typedef struct Chunk {
	char ch[CHUNKSIZE];
	struct Chunk* next;
} Chunk;

typedef struct {
	Chunk* head, * tail;   //����ͷָ���βָ��
	int curlen;  //���ĵ�ǰ����
}LString;   //�ַ����Ŀ����ṹ
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
