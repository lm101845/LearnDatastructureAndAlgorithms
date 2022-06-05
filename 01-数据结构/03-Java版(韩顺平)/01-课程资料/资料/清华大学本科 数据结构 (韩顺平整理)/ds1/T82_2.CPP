		#include <iostream.h>
		#include "p82.cpp"
		#include <stdio.h>
		template <class Type> void CircList<Type> :: Josephus ( int n, int m ) {
		   for ( int i=0; i<n-1; i++ ) {						//循环n-1趟，让n-1个人出列
			 for ( int j=0; j<m-1; j++ ) Next ( );	  			//让current向后移动m-1次
			 cout << "Delete person " << getNextData ( ) << endl;
			 RemoveNext ( ); 								//删去该结点，让current指示下一结点
		   }
		   cout << "the winner is : " << getData () << endl;
		}

		void main ( ) {
		   CircList<int> clist;							//定义循环链表clist并初始化
		   int n, m;									//n是总人数，m是报数值
		   cout << "Enter the Number of Contestants?";
		   cin >> n >> m;
		   for ( int i=1; i<=n; i++ ) clist.Insert (i);				//建立数据域为1, 2, … 的循环链表
		   clist.Josephus (n, m);							//解决约瑟夫问题，打印胜利者编号
		}
