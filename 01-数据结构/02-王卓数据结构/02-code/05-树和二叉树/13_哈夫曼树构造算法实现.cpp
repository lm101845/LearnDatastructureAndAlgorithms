//2023年4月25日15:33:46 

#include <iostream>
using namespace std;

typedef struct {
	int weight;
	int parent, lch, rch;
}HTNode,*HuffmanTree;

//构造哈夫曼树，哈夫曼算法
void createHuffmanTree(HuffmanTree HT, int n)
{
	if (n <= 1) return;
	m = 2 * n - 1;   //数组共2n-1个元素
	HT = new HTNode[m + 1];   //0号单元未用，HT[m]表示根结点
	//将2n-1个元素的lch,rch,parent置为0
	for (i = 1; i <= m; i++)
	{
		HT[i].lch = 0;
		HT[i].rch = 0;
		HT[i].parent = 0;
	}
	for (i = 1; i <= n; i++)
	{
		cin >> HT[i].weight;   //输入前n个元素的weight值
	}
	//初始化结束，下面开始建立哈夫曼树

	//合并产生n-1个结点——构造哈夫曼树
	for (i = n + 1; i <= m; i++)
	{
		Select(HT, i - 1, s1, s2);   //找2个最小的值
		HT[i].lch = s1;
		HT[i].rch = s2;  //s1,s2分别为i的左右孩子
		HT[i].weight = HT[s1].weight + HT[s2].weight;  //i的权值为左右孩子权值之和
	}
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
