//2023��4��2��18:25:13

//���ص�ģʽƥ���㷨��Brute-Force�㷨�����BF�㷨��
#include <iostream>
#include "define.h"
using namespace std;

typedef struct {
	char ch[MAXLEN + 1];   //�洢����һά����
	int length;   //���ĵ�ǰ����
}SString;

int index_BF(SString S, SString T)
{
	int i = 1, j = 1;
	//S��ģʽ����T���Ӵ�
	while (i <= S.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		//�������Ӵ�����ƥ����һ���ַ�
		{
			++i;
			++j; 
		}
		else {
			//�Ƚϲ��ɹ������л���
			//�ַ�����1��ʼ(λ��0���ڱ�ģ����������)
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length) return i - T.length;   //����ƥ��ĵ�һ���ַ����±�
	else return 0;   //ģʽƥ�䲻�ɹ�(�������һ��ƥ�䲻�ɹ���jҲ�ᱻ��ֵΪ1��ע�⿴else���)
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
