//2023��4��2��20:40:413

#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	char ch[MAXLEN + 1];   //�洢����һά����
	int length;   //���ĵ�ǰ����
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
	//S��ģʽ����T���Ӵ�
	while (i < S.length && j < T.length)
	{
		if (j == 0 || S.ch[i] == T.ch[j])
		//�������Ӵ�����ƥ����һ���ַ�
		{
			++i;
			++j;
		}
		else {
			j = next[j];  //i���䣬j����
		}
	}
	if (j > T.length) return i - T.length;   //ƥ��ɹ�
	else return 0;   //ģʽƥ�䲻�ɹ�(�������һ��ƥ�䲻�ɹ���jҲ�ᱻ��ֵΪ1��ע�⿴else���)
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
