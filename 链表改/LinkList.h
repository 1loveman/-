#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElementType;
typedef struct {
	ElementType Data;
	struct LNode* Next;
}LNode,*LinkList;


#endif