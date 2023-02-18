		#include <iostream.h>
		#include "p82.cpp"
                #include <stdio.h>

		void main ( ) {
		   CircList<int> clist;
		   //clist.CircList<int>();							//定义循环链表clist并初始化
		   int n, m;									//n是总人数，m是报数值
		   cout << "Enter the Number of Contestants?";
		   cin >> n >> m;
		   for ( int i=1; i<=n; i++ ) clist.Insert (i);				//建立数据域为1, 2, … 的循环链表
		   clist.Josephus (n, m);							//解决约瑟夫问题，打印胜利者编号
		}
