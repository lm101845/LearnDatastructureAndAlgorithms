		#include <iostream.h>
		#include "p82.cpp"
                #include <stdio.h>

		void main ( ) {
		   CircList<int> clist;
		   //clist.CircList<int>();							//����ѭ������clist����ʼ��
		   int n, m;									//n����������m�Ǳ���ֵ
		   cout << "Enter the Number of Contestants?";
		   cin >> n >> m;
		   for ( int i=1; i<=n; i++ ) clist.Insert (i);				//����������Ϊ1, 2, �� ��ѭ������
		   clist.Josephus (n, m);							//���Լɪ�����⣬��ӡʤ���߱��
		}
