//2023年4月27日15:19:40

#include <iostream>
using namespace std;
#include "define.h"

#define MVNum 100			//最大顶点数
typedef char VerTexType;   //设顶点的数据类型为字符型
typedef int ArcType;	   //假设边的权值类型为整型
typedef int InfoType;

typedef struct ArcNode {
	int adjvex;  //该弧所指向的顶点的位置
	struct ArcNode* nextarc;   //指向下一条弧的指针
	InfoType* info;   //该弧相关信息的指针
} ArcNode;

typedef struct VNode {
	VerTexType data;   //顶点信息
	ArcNode* fristarc;   //指向第一条依附该顶点的边的指针
}VNode,AdjList[MVNum];   //AdjList表示邻接表类型


typedef struct {
	AdjList vertices;  //vertices--vetrex的复数
	int vexnum, arcnum;  //图的当前顶点数和弧度
} ALGraph;


Status CreateUDG(ALGraph& G) {   //采用邻接点表示法，创建无向图G
	cin >> G.vexnum >> G.arcnum;   //输入总顶点数，总边数
	for (int i = 0; i < G.vexnum; ++i) {  //输入各点，构造表头结点表
		cin >> G.vertices[i].data;  //输入顶点值
		G.vertices[i].fristarc = NULL;   //初始化表头结点的指针域
	}

	for (int k = 0; k < G.arcnum; k++) {   //输入各边，构造邻接表 
		cin >> v1 >> v2;    //输入一条边依附的2个顶点
		i = LocateVex(G, v1);
		j = LocateVex(G, v2);
	}

	p1 = new ArcNode;   //生成一个新的边结点*p1
	p1->adjvex = j  //邻接点序号为j
	p1->nextarc = G.vertices[i].firstarc;
	G.vertices[i].firstarc = p1;  //将新结点*p1插入顶点vi的边表头部
	p2 = new ArcNode;   //生成另一个对称的新的边结点*p2
	p2->adjvex = i;  //邻接点序号为i
	p2->nextarc = G.vertices[j].firstarc; 
	G.vertices[j].firstarc = p2;  //将新结点*p2插入顶点vj的边表头部
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
