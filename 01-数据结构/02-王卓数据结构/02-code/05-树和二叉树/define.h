#ifndef __DEFINE_H
//如果一个头文件已经被包含过了，再次包含它就会导致编译错误，
//因此可以使用 `#ifndef` 来判断是否已经定义过，如果没有定义过，就可以定义它,避免了重复包含
#define __DEFINE_H
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSTACK 100
#define MAXSIZE 100
#define MAXLEN 255
#define CHUNKSIZE 80   //块链
typedef int Status;
//Status是函数的类型，其值是函数结果状态代码
typedef char ElemType;

#endif



