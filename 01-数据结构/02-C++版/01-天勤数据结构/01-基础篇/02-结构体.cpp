/**
2022年4月10日
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
        //括号里的每一个变量，称为结构体类型的一个分量
    }Student; 
    
    Student stu;
    stu.a = 1;
    stu.b = 1.1;
    stu.c = 'A';
    return 0;
}
