#include"LQueue.h"

//初始化
int Init_LQ(LQue* LQ) {
	if (!(LQ->rear=LQ->front = (QuPtrl)malloc(sizeof(QNode)))) {
		return -1;
	}
	LQ->front->Next = NULL;
	return 1;
}

//销毁
int Dest_LQ(LQue* LQ) {
	//不借助第三个变量
	while (LQ->front) {
		LQ->rear = LQ->front->Next;
		free(LQ->front);
		LQ->front = LQ->rear;
	}
	//方法二借助临时变量
	/*while (LQ->front) {
		QNode* p = LQ->front->Next;
		free(LQ->front);
		LQ->front = p;
	}
	LQ->rear = LQ->front;*/
	return 1;
}

//清空
int Empty_LQ(LQue* LQ) {
	while (LQ->front->Next) {
		LQ->rear= LQ->front->Next;
		LQ->front->Next = LQ->rear->Next;
		free(LQ->rear);
	}
	LQ->rear = LQ->front;
	return 1;
}

//入队
int In_LQ(LQue* LQ,ElemType* e) {
	QNode* p = (QuPtrl)malloc(sizeof(QNode));
	if (!p) {
		return -1;
	}
	p->Data = *e;
	p->Next = LQ->rear->Next;
	LQ->rear->Next = p;
	LQ->rear = p;
	return 1;
}

//出队
int Out_LQ(LQue* LQ, ElemType* e) {
	if (LQ->front == LQ->rear) {
		return -1;
	}
	if (LQ->front->Next == LQ->rear) {
		LQ->front->Next = LQ->rear->Next;
		free(LQ->rear);
		LQ->rear = LQ->front;
	}
	else {
		QNode* p = LQ->front->Next;
		LQ->front->Next = p->Next;
		*e = p->Data;
		free(p);
	}
	return 1;
}

//求队列队头元素
int GetHead(LQue* LQ, ElemType* e) {
	QNode* p = LQ->front->Next;
	if (p) {
		*e = p->Data;
		return 1;
	}
	return -1;
}