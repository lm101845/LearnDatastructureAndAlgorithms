//2023��4��29��09:54:26

#include <iostream>
using namespace std;

void BFS(Graph G, int v)   //��������ȷǵݹ������ͨͼG
{
	cout << v; 
	visited[v] = true;   //���ʵ�v������
	initQueue(Q);   //��������Q��ʼ�����ÿ�
	EnQueue(Q, v);    //v����
	while (!QueueEmpty(Q))   //���зǿ�
	{
		DeQueue(Q, u);   //��ͷԪ�س��Ӳ���Ϊu
		for (w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w))
			if (!visited[w])  //wΪu����δ���ʵ��ڽӶ���
				cout << w; visited[w] = true; EnQueue(Q, w);   //w����
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
