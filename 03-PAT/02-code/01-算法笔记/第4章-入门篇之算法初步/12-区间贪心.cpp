//2024年1月23日09:30:58
//不能完全理解代码的意思，需要再看看
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 110;

struct Inteval {
	int x, y;   //开区间左右端点
}I[maxn];

bool cmp(Inteval a, Inteval b) {
	if(a.x != b.x) return a.x > b.x; //按左端点从大到小排序
	else return a.y < b.y;  //左端点相同，按右端点从小到大排序
}
	
int main()
{
	int n;
	/**
	 * 整个表达式的意思是：
	尝试从标准输入读取一个整数并存储在变量n中。
	检查这个整数是否不等于0。
	如果这个整数不等于0，则执行while循环的代码块。
	这种结构通常用于从用户那里连续读取整数，直到用户输入0为止。
	 */
	while (scanf("%d", &n), n != 0) {
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &I[i].x, &I[i].y);
		}
		sort(I, I + n, cmp);  //把区间排序
		for(int i = 0; i < n; i++) {
			printf("%d %d\n", I[i].x, I[i].y);
		}
		//ans记录不相交区间的个数，lastX记录上一个被选中区间的左端点
		int ans = 1, lastX = I[0].x;  //最右端点，最左端点
		for (int i = 1; i < n; i++) {
			if(I[i].y <= lastX) {  //如果当前区间右端点在lastX左边
				lastX = I[i].x;  //以I[i]为新的被选中区间
				ans++;  //不相交区间个数加1
			}
		}
		printf("%d\n", ans);
	}
	system("PAUSE");
}
