//2023��4��25��15:33:46 

#include <iostream>
using namespace std;

typedef struct {
	int weight;
	int parent, lch, rch;
}HTNode,*HuffmanTree;

//��������������������㷨
void createHuffmanTree(HuffmanTree HT, int n)
{
	if (n <= 1) return;
	m = 2 * n - 1;   //���鹲2n-1��Ԫ��
	HT = new HTNode[m + 1];   //0�ŵ�Ԫδ�ã�HT[m]��ʾ�����
	//��2n-1��Ԫ�ص�lch,rch,parent��Ϊ0
	for (i = 1; i <= m; i++)
	{
		HT[i].lch = 0;
		HT[i].rch = 0;
		HT[i].parent = 0;
	}
	for (i = 1; i <= n; i++)
	{
		cin >> HT[i].weight;   //����ǰn��Ԫ�ص�weightֵ
	}
	//��ʼ�����������濪ʼ������������

	//�ϲ�����n-1����㡪�������������
	for (i = n + 1; i <= m; i++)
	{
		Select(HT, i - 1, s1, s2);   //��2����С��ֵ
		HT[i].lch = s1;
		HT[i].rch = s2;  //s1,s2�ֱ�Ϊi�����Һ���
		HT[i].weight = HT[s1].weight + HT[s2].weight;  //i��ȨֵΪ���Һ���Ȩֵ֮��
	}
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
