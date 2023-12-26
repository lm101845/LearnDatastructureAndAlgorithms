//2023Äê12ÔÂ6ÈÕ14:15:45 

#include <iostream>
using namespace std;



int main(int argc, char* argv[])
{
	int a[5] = { 1,2,3,4,5 };
	for (int* p = a; p < a + 5; p++) {
		printf("%d ", *p);
	}
	system("PAUSE");
}
