//2023��4��27��13:06:35
#include <iostream>
#include "define.h"
using namespace std;

#define MVNum 100			//��󶥵���
typedef char VerTexType;   //�趥�����������Ϊ�ַ���
typedef int ArcType;	   //����ߵ�Ȩֵ����Ϊ����
typedef struct {
	VerTexType vexs[MVNum];   //ʹ��һά���鴴�������
	ArcType arcs[MVNum][MVNum];//����һ����ά����洢�ڽӾ���
	int vexnum, arcnum;   //ͼ�ĵ�ǰ�����ͱ���
}AMGraph;


//�����㷨����ͼ�в��Ҷ���
//ͼG�в��Ҷ���u,�����򷵻ض�����е��±꣬���򷵻�-1
int LocateVex(AMGraph G, VerTexType u)
{
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vexs[i]) return i;
	}
	return -1;
}
//�����ڽӾ��󷨴���������
Status CreateUDN(AMGraph& G)
{
	cin >> G.vexnum >> G.arcnum;   //�����ܶ��������ܱ���
	int i;
	int j;
	int k;
	for (i = 0; i < G.vexnum; ++i)
		cin >> G.vexs[i];   //������������Ϣ
	for (i = 0; i < G.vexnum; ++i)   //��ʼ���ڽӾ���
		for (j = 0; j < G.vexnum; ++j)
			G.arcs[i][j] = MaxInt;   //�ߵ�Ȩֵ����Ϊ����ֵ
	for (k = 0; k < G.arcnum; ++k) {   //�����ڽӾ���
		cin >> v1 >> v2 >> w;   //����һ�����������Ķ��㼰�ߵ�Ȩֵ
		j = LocateVex(G, v1);
		j = LocateVex(G, v2);   //ȷ��v1,v2��G�е�λ��
		G.arcs[i][j] = w;   //��<v1,v2>��Ȩֵ��Ϊw
		G.arcs[j][i] = G.arcs[i][j];   //��<v1,v2>�ĶԳƱ�<v2,v1��ȨֵΪw>
	}
	return OK;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
