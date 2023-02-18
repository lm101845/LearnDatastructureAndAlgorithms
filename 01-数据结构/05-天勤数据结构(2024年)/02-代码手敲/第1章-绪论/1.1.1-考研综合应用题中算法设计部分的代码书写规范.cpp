//2023年2月12日20:22:43
/*
*要实现R中序列循环左移P个位置，只需先将R中前P个元素逆置，再将剩下的元素逆置，最后将R中所有的元素
* 再整体做一遍逆置操作即可
*/
#include <iostream>
#define N 50
using namespace std;

void Reverse(int R[], int l, int r)
{
	int i, j;
	int temp;
	for (i = 1, j = r; i < j; ++i, --j)
	{
		temp = R[i];
		R[i] = R[j];
		R[j] = temp;
	}
}

void RCR(int R[], int n, int p)
{
	if (p <= 0 || p >= n)
		cout << "ERROR" << endl;
	else
	{
		Reverse(R, 0, p - 1);
		Reverse(R, p, n - 1);
		Reverse(R, 0, n - 1);
	}
}

int main(int argc, char* argv[])
{
	int L, i;
	int R[N], n;
	cin >> L;
	cout << "L" << endl;
	cin >> n;
	cout << "n" << endl;
	for (i = 0; i <= n - 1; i++)
		cin >> R[i];
	RCR(R, n, L);
	for (i = 0; i <= n - 1; i++)
		cout << R[i] << " ";
	cout << endl;
	system("PAUSE");
}
