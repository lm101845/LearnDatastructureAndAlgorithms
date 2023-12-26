//2023年12月6日14:35:35 

#include <iostream>
using namespace std;

void change(int& x) {
	//要把引用的&和取地址运算符&区分开来，引用并不是取地址的意思
	x = 1;
}

int main(int argc, char* argv[])
{
	int x = 10;
	change(x);
	printf("%d\n", x);
	system("PAUSE");
}
