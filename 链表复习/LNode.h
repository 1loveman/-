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

//返回链表长度
int Length(List PtrL);

//求第K个结点
List FindKth(int K, List PtrL);

//求第一个X出现的结点
List Find(ElementType X, List PtrL);

//在第i个结点前插入一个X结点
List Insert(ElementType X, int i, List PtrL);

//删除第i个结点
List Delete(int i, List PtrL);

#endif
