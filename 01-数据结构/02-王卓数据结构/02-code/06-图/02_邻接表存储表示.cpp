//2023��4��27��15:19:40

#include <iostream>
using namespace std;
#include "define.h"

#define MVNum 100			//��󶥵���
typedef char VerTexType;   //�趥�����������Ϊ�ַ���
typedef int ArcType;	   //����ߵ�Ȩֵ����Ϊ����
typedef int InfoType;

typedef struct ArcNode {
	int adjvex;  //�û���ָ��Ķ����λ��
	struct ArcNode* nextarc;   //ָ����һ������ָ��
	InfoType* info;   //�û������Ϣ��ָ��
} ArcNode;

typedef struct VNode {
	VerTexType data;   //������Ϣ
	ArcNode* fristarc;   //ָ���һ�������ö���ıߵ�ָ��
}VNode,AdjList[MVNum];   //AdjList��ʾ�ڽӱ�����


typedef struct {
	AdjList vertices;  //vertices--vetrex�ĸ���
	int vexnum, arcnum;  //ͼ�ĵ�ǰ�������ͻ���
} ALGraph;


Status CreateUDG(ALGraph& G) {   //�����ڽӵ��ʾ������������ͼG
	cin >> G.vexnum >> G.arcnum;   //�����ܶ��������ܱ���
	for (int i = 0; i < G.vexnum; ++i) {  //������㣬�����ͷ����
		cin >> G.vertices[i].data;  //���붥��ֵ
		G.vertices[i].fristarc = NULL;   //��ʼ����ͷ����ָ����
	}

	for (int k = 0; k < G.arcnum; k++) {   //������ߣ������ڽӱ� 
		cin >> v1 >> v2;    //����һ����������2������
		i = LocateVex(G, v1);
		j = LocateVex(G, v2);
	}

	p1 = new ArcNode;   //����һ���µı߽��*p1
	p1->adjvex = j  //�ڽӵ����Ϊj
	p1->nextarc = G.vertices[i].firstarc;
	G.vertices[i].firstarc = p1;  //���½��*p1���붥��vi�ı߱�ͷ��
	p2 = new ArcNode;   //������һ���ԳƵ��µı߽��*p2
	p2->adjvex = i;  //�ڽӵ����Ϊi
	p2->nextarc = G.vertices[j].firstarc; 
	G.vertices[j].firstarc = p2;  //���½��*p2���붥��vj�ı߱�ͷ��
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
