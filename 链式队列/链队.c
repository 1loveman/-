#include<stdio.h>
#include"LQueue.h"

////��ʼ��
//int Init_LQ(LQue* LQ);
//
////����
//int Dest_LQ(LQue* LQ);
//
////���
//int Empty_LQ(LQue* LQ);
//
////���
//int In_LQ(LQue* LQ, ElemType* e);
//
////����
//int Out_LQ(LQue* LQ, ElemType* e);
//
////����ж�ͷԪ��
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