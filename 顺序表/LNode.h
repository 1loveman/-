#ifndef __LNODE_H__
#define __LNODE_H__
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE	10
typedef int ElementType;
typedef	struct LNode* List;
struct LNode {
	ElementType Data[MAXSIZE];
	int Last;
};


List MakeEmpty();

ElementType FindKth(int K, List PtrL);

int Find(ElementType X, List PtrL);

void Insert(ElementType X, int K, List PtrL);

void Delete(int K, List PtrL);

int Length(List PtrL);

#endif