//2024年1月22日09:24:03

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct mooncake {
	double store;   //库存量
	double sell;    //总售价
	double price;   //单价
}cake[1010];


//按单价从高到低排序
bool cmp(mooncake a, mooncake b) {
	return a.price > b.price;
}
int main()
{
	int n;
	double D;
	scanf("%d%lf", &n, &D);
	for(int i = 0; i < n; i++) {
		scanf("%lf", &cake[i].store);
	}

	for (int i = 0; i < n; i++) {
		scanf_s("%lf", &cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].store;   //计算单价
	}

	sort(cake, cake + n, cmp);   //按单价从高到低排序
	/**
	 * sort(cake, cake + n, cmp); 这行代码的作用是对cake数组中的元素进行排序。

		cake：这是数组的起始地址。
		cake + n：这是数组的结束地址。当你有一个数组，例如int arr[10];，
		arr + 10会指向数组末尾后一个位置的地址，也就是一个越界的地址。因此，
		对于你的cake数组，cake + n指向的是数组末尾后一个位置的地址。
		cmp：这是一个比较函数，用于定义排序的顺序。在你的代码中
		，cmp函数定义了按照price字段从高到低的排序顺序。
		所以，这行代码的意思是：从cake数组的起始地址开始，
		到cake + n的地址结束，按照cmp函数定义的顺序进行排序。
		也就是说，它会按照price字段从高到低的顺序对整个cake数组进行排序。
	 * 
	 * 
	 */
	double ans = 0;   //收益

	for (int i = 0; i < n; i++) {
		if (cake[i].store <= D) {
			//如果需求量高于月饼库存量
			D -= cake[i].store;   //第i种月饼全部卖出
			ans += cake[i].sell;
		}
		else {
			//如果需求量低于月饼库存量
			ans += cake[i].price * D;   //只卖出剩余需求量的月饼
			break;
		}
	}
	printf("%.2f\n", ans);
	system("PAUSE");
}
