//2023年2月11日17:32:28
/* c1.h (程序名) */
#include<string.h>
#include<ctype.h>
#include<malloc.h> /* malloc()等 */
#include<limits.h> /* INT_MAX等 */
#include<stdio.h> /* EOF(=^Z或F6),NULL */
#include<stdlib.h> /* atoi() */
#include<io.h> /* eof() */
#include<math.h> /* floor(),ceil(),abs() */
#include<process.h> /* exit() */

/* 函数结果状态代码 */
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
/* #define OVERFLOW -2 因为在math.h中已定义OVERFLOW的值为3,故去掉此行 */
typedef int Status; /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int Boolean; /* Boolean是布尔类型,其值是TRUE或FALSE */

 /* 以下2行可根据需要选用一个（且只能选用一个），而不需改变基本操作bo1-1.c */
typedef int ElemType; /* 定义抽象数据类型ElemType在本程序中为整型 */
/*typedef double ElemType; /* 定义抽象数据类型ElemType在本程序中为双精度型 */

/* c1-1.h 采用动态分配的顺序存储结构 */
typedef ElemType* Triplet; /* 由InitTriplet分配三个元素存储空间 */
/* Triplet类型是ElemType类型的指针，存放ElemType类型的地址 */
