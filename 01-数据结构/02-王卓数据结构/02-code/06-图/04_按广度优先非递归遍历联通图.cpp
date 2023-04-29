//2023年4月29日09:54:26

#include <iostream>
using namespace std;

void BFS(Graph G, int v)   //按广度优先非递归遍历连通图G
{
	cout << v; 
	visited[v] = true;   //访问第v个顶点
	initQueue(Q);   //辅助队列Q初始化，置空
	EnQueue(Q, v);    //v进队
	while (!QueueEmpty(Q))   //队列非空
	{
		DeQueue(Q, u);   //队头元素出队并置为u
		for (w = FirstAdjVex(G, u); w >= 0; w = NextAdjVex(G, u, w))
			if (!visited[w])  //w为u的尚未访问的邻接顶点
				cout << w; visited[w] = true; EnQueue(Q, w);   //w进队
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
