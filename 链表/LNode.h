#ifndef __LNODE_H__
#define __LNODE_H__
#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
typedef struct LNode* List;
struct LNode {
	ElementType Data;
	List Next;
};
//求链表结点个数
int Length(List PtrL);

//返回第K个结点地址
List FindKth(int K, List PtrL);

//查找X所在结点
List Find(ElementType X, List PtrL);

//在第i个结点之前插入X
List Insert(ElementType X, int i, List PtrL);

//删除第i个结点
List Delete(int i, List PtrL);


#endif