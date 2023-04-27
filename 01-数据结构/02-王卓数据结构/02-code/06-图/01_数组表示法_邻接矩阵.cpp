//2023年4月27日13:06:35
#include <iostream>
#include "define.h"
using namespace std;

#define MVNum 100			//最大顶点数
typedef char VerTexType;   //设顶点的数据类型为字符型
typedef int ArcType;	   //假设边的权值类型为整型
typedef struct {
	VerTexType vexs[MVNum];   //使用一维数组创建顶点表
	ArcType arcs[MVNum][MVNum];//创建一个二维数组存储邻接矩阵
	int vexnum, arcnum;   //图的当前点数和边数
}AMGraph;


//补充算法：在图中查找顶点
//图G中查找顶点u,存在则返回顶点表中的下标，否则返回-1
int LocateVex(AMGraph G, VerTexType u)
{
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vexs[i]) return i;
	}
	return -1;
}
//采用邻接矩阵法创建无向网
Status CreateUDN(AMGraph& G)
{
	cin >> G.vexnum >> G.arcnum;   //输入总顶点数，总边数
	int i;
	int j;
	int k;
	for (i = 0; i < G.vexnum; ++i)
		cin >> G.vexs[i];   //依次输入点的信息
	for (i = 0; i < G.vexnum; ++i)   //初始化邻接矩阵
		for (j = 0; j < G.vexnum; ++j)
			G.arcs[i][j] = MaxInt;   //边的权值均置为极大值
	for (k = 0; k < G.arcnum; ++k) {   //构造邻接矩阵
		cin >> v1 >> v2 >> w;   //输入一条边所依附的顶点及边的权值
		j = LocateVex(G, v1);
		j = LocateVex(G, v2);   //确定v1,v2在G中的位置
		G.arcs[i][j] = w;   //边<v1,v2>的权值置为w
		G.arcs[j][i] = G.arcs[i][j];   //置<v1,v2>的对称边<v2,v1的权值为w>
	}
	return OK;
}

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
