//2023��4��26��15:01:39

#include <iostream>
using namespace std;

typedef struct {
	int weight;
	int parent, lch, rch;
}HTNode, * HuffmanTree;

void createHuffmanCode(HuffmanTree HT, HuffmanCode& HC, int n)
{
	//��Ҷ�ӵ���������ÿ���ַ��Ĺ��������룬�洢�ڱ����HC��
	HC = new char* [n + 1];   //����n���ַ������ͷָ��ʸ��
	cd = new char[n];    //������ʱ��ű���Ķ�̬����ռ�
	cd[n - 1] = '\0';   //���������
	for (i = 1; i <= n; i++)   //����ַ������������
	{
		start = n - 1;
		c = i;
		f = HT[i].parent;
		while (f != 0) {  //��Ҷ�ӽ�㿪ʼ���ϻ��ݣ�ֱ�������
			start--;   //����һ��start��ǰָһ��λ��
			if (HT[f].lchild == c) cd[start] = '0';
			//���c��f�����ӣ������ɴ���0
			else cd[start] = '1';   //���c��f���Һ��ӣ������ɴ���1
			c = f; 
			f = HT[f].parent;   //�������ϻ���
		}
		HC[i] = new char[n - start];  //Ϊ��i���ַ����������ռ�
		strcpy(HC[i], &cd[start]);  //����õı������ʱ�ռ�cd���Ƶ�HC�ĵ�ǰ����
	}

	delete cd;  //�ͷ���ʱ�ռ�

}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
