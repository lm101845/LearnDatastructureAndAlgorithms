//2023年12月6日10:38:42

#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	int  a[10] = { 3,1,4,5,2 };
	for (int i = 1; i <= 4; i++) {   //进行n-1趟
		for (int j = 0; j < 5 - i; j++) {
			if (a[j] > a[j + 1]) {   //如果左边的数更大，则交换a[j]和a[j+1]
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	system("PAUSE");
}
