//2023��2��11��17:32:28
/* c1.h (������) */
#include<string.h>
#include<ctype.h>
#include<malloc.h> /* malloc()�� */
#include<limits.h> /* INT_MAX�� */
#include<stdio.h> /* EOF(=^Z��F6),NULL */
#include<stdlib.h> /* atoi() */
#include<io.h> /* eof() */
#include<math.h> /* floor(),ceil(),abs() */
#include<process.h> /* exit() */

/* �������״̬���� */
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
/* #define OVERFLOW -2 ��Ϊ��math.h���Ѷ���OVERFLOW��ֵΪ3,��ȥ������ */
typedef int Status; /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int Boolean; /* Boolean�ǲ�������,��ֵ��TRUE��FALSE */

 /* ����2�пɸ�����Ҫѡ��һ������ֻ��ѡ��һ������������ı��������bo1-1.c */
typedef int ElemType; /* ���������������ElemType�ڱ�������Ϊ���� */
/*typedef double ElemType; /* ���������������ElemType�ڱ�������Ϊ˫������ */

/* c1-1.h ���ö�̬�����˳��洢�ṹ */
typedef ElemType* Triplet; /* ��InitTriplet��������Ԫ�ش洢�ռ� */
/* Triplet������ElemType���͵�ָ�룬���ElemType���͵ĵ�ַ */
