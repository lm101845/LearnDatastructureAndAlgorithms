/**
2022��4��10��
*/
#include <iostream>
using namespace std;

int main()
{
    typedef struct 
    {
        int a;
        float b;
        char c;
        //�������ÿһ����������Ϊ�ṹ�����͵�һ������
    }Student; 
    
    Student stu;
    stu.a = 1;
    stu.b = 1.1;
    stu.c = 'A';
    return 0;
}
