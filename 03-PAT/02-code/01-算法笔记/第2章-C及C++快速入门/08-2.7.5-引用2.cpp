//2023年12月6日14:42:42

#include <iostream>
using namespace std;

/**
* 指针变量其实是unsigned 类型的整数，因此为了理解的方便，可以“简单”的
* 把int*型理解成unsigned型，而直接交换这样的两个整型变量是需要加引用的
* 
* 需要强调的是，由于引用是产生【变量】的【别名】，因此常量不可使用引用。
* 于是上面的代码不可以写成swap(&a,&b),而必须使用指针变量p1和p2存放&a和&b
*/
void swap(int*& p1, int*& p2) {
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}

int main(int argc, char* argv[])
{
	int a = 1, b = 2;
	int *p1 = &a, * p2 = &b;
	swap(p1, p2);
	printf("a = %d,b = %d\n", *p1, *p2);
	system("PAUSE");
}
