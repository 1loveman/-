#ifndef __QUEUE_H__
#define __QUEUE_H__
#include"stdlib.h"
#define MAXSIZEQ 3
typedef int ElemType;
typedef struct {
	ElemType* Data;
	int font;
	int rear;
}SQueue,*SQuList;

//初始化队列
int Init_Que(SQuList SQL);

//求队列长度
int GetLen_Que(SQuList SQL);

//入队
int In_Que(SQuList SQL, ElemType* e);

//出队
int Out_Que(SQuList SQL, ElemType* e);

//取队头元素
int GetHead_Que(SQuList SQL, ElemType* e);

#endif

