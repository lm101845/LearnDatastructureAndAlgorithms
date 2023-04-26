//2023年4月26日15:01:39

#include <iostream>
using namespace std;

typedef struct {
	int weight;
	int parent, lch, rch;
}HTNode, * HuffmanTree;

void createHuffmanCode(HuffmanTree HT, HuffmanCode& HC, int n)
{
	//从叶子到根逆向求每个字符的哈夫曼编码，存储在编码表HC中
	HC = new char* [n + 1];   //分配n个字符编码的头指针矢量
	cd = new char[n];    //分配临时存放编码的动态数组空间
	cd[n - 1] = '\0';   //编码结束符
	for (i = 1; i <= n; i++)   //逐个字符求哈夫曼编码
	{
		start = n - 1;
		c = i;
		f = HT[i].parent;
		while (f != 0) {  //从叶子结点开始向上回溯，直到根结点
			start--;   //回溯一次start向前指一个位置
			if (HT[f].lchild == c) cd[start] = '0';
			//结点c是f的左孩子，则生成代码0
			else cd[start] = '1';   //结点c是f的右孩子，则生成代码1
			c = f; 
			f = HT[f].parent;   //继续向上回溯
		}
		HC[i] = new char[n - start];  //为第i个字符串编码分配空间
		strcpy(HC[i], &cd[start]);  //将求得的编码从临时空间cd复制到HC的当前行中
	}

	delete cd;  //释放临时空间

}

int main(int argc, char* argv[])
{
	system("PAUSE");
}
