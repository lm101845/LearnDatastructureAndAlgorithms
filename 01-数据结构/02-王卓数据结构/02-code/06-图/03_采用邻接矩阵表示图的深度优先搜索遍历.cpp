//2023年4月29日09:27:42

#include <iostream>
using namespace std;

void DFS(AMGraph G, int v)   //图G为邻接矩阵类型
{
	cout << v; visited[v] = true;   //访问第v个顶点
	for (w = 0; w < G.vexnum; w++)   //依次检查邻接矩阵v所在的行
	{
		if ((G.arcs[v][w] != 0) && (!visited[w]))
			DFS(G, w);   
			//w是v的邻接点，如果w未被访问，则递归调用DFS
	}
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
