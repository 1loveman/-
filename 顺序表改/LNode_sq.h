#ifndef __LNODE_SQ_H__
#define __LNODE_SQ_H__
#include<stdio.h>	
#include<stdlib.h>
#define MAXSIZE 10
#define TURE 1
#define FALSE 0
#define INFEASIBLLE -1
#define OVERFLOW -2
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElementType;
typedef struct LNode {
	ElementType* Data;
	int length;
}List;

//初始化顺序表
Status Init_sq(List* PtrL);

//销毁顺序表
void Destory_sq(List* PtrL);

//清空顺序表
void Empty_sq(List* PtrL);

//求顺序表长度
int Length_sq(List* PtrL);

//判空
Status Determine_sq(List* PtrL);

//查找位置i对应元素的内容
Status Findith(List* PtrL, int i, ElementType* e);

//查找某个元素返回序号否则返回0---不是返回下标。
int Find_sq(List* PtrL, ElementType e);

//在位置i插入元素e
Status Insert_sq(List* PtrL, int i, ElementType e);

//删除位置i的元素
Status Delete_sq(List* PtrL, int i);





#endif
