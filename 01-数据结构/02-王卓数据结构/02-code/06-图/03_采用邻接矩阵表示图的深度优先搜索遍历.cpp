//2023��4��29��09:27:42

#include <iostream>
using namespace std;

void DFS(AMGraph G, int v)   //ͼGΪ�ڽӾ�������
{
	cout << v; visited[v] = true;   //���ʵ�v������
	for (w = 0; w < G.vexnum; w++)   //���μ���ڽӾ���v���ڵ���
	{
		if ((G.arcs[v][w] != 0) && (!visited[w]))
			DFS(G, w);   
			//w��v���ڽӵ㣬���wδ�����ʣ���ݹ����DFS
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
