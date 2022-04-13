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

//��ʼ��
int Init_LQ(LQue* LQ);

//����
int Dest_LQ(LQue* LQ);

//���
int Empty_LQ(LQue* LQ);

//���
int In_LQ(LQue* LQ, ElemType* e);

//����
int Out_LQ(LQue* LQ, ElemType* e);

//����ж�ͷԪ��
int GetHead(LQue* LQ, ElemType* e);

#endif
