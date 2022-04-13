#ifndef __LQUEUE_H__
#define __LQUEUE_H__
#include<stdlib.h>

typedef int ElemType;
typedef struct {
	ElemType Data;
	struct QNode* Next;
}QNode,*QuPtrl;

typedef struct {
	QuPtrl front;
	QuPtrl rear;
}LQue;

//初始化
int Init_LQ(LQue* LQ);

//销毁
int Dest_LQ(LQue* LQ);

//清空
int Empty_LQ(LQue* LQ);

//入队
int In_LQ(LQue* LQ, ElemType* e);

//出队
int Out_LQ(LQue* LQ, ElemType* e);

//求队列队头元素
int GetHead(LQue* LQ, ElemType* e);

#endif
