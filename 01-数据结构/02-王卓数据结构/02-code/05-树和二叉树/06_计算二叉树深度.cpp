//2023��4��22��13:15:14

#include <iostream>
using namespace std;

int Depth(BiTree T) {
	if (T == NULL) return 0;   //����ǿ����򷵻�0
	else {
		m = Depth(T -> lChild);
		n = Depth(T -> rChild);
		if (m > n) return (m + 1);
		else return (n + 1);
	}
}
int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
