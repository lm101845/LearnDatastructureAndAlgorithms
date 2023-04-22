//2023年4月22日13:15:14

#include <iostream>
using namespace std;

int Depth(BiTree T) {
	if (T == NULL) return 0;   //如果是空树则返回0
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
