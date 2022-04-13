#include<stdio.h>
#include"LQueue.h"

////初始化
//int Init_LQ(LQue* LQ);
//
////销毁
//int Dest_LQ(LQue* LQ);
//
////清空
//int Empty_LQ(LQue* LQ);
//
////入队
//int In_LQ(LQue* LQ, ElemType* e);
//
////出队
//int Out_LQ(LQue* LQ, ElemType* e);
//
////求队列队头元素
//int GetHead(LQue* LQ, ElemType* e);

int main() {
	int ret=0;
	LQue LQ;
	ret=Init_LQ(&LQ);
	printf("%d\n", ret);
	ret= In_LQ(&LQ, &ret);
	printf("%d", ret);
	ret = In_LQ(&LQ, &ret);
	printf("%d\n", ret);
	ret = Out_LQ(&LQ, &ret);
	printf("%d", ret);
	ret = Out_LQ(&LQ, &ret);
	printf("%d", ret);
	ret = Out_LQ(&LQ, &ret);
	printf("%d\n", ret);

	ret = Empty_LQ(&LQ);
	printf("%d\n", ret);

	ret=GetHead(&LQ,&ret);
	printf("%d\n",ret);
	return 0;
}