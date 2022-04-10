#ifndef __SQSTACK_H__
#define __SQSTACK_H__
#include<stdlib.h>
#define MAXSIZE 5
typedef int SElemType;
typedef struct {
	int StackSize;
	SElemType* Top;
	SElemType* Base;
}SqStack;

int Init_SqStack(SqStack* Stack);

int Is_Empty(SqStack* Stack);

int GetLenth(SqStack* Stack);

int Empty(SqStack* Stack);

int Free(SqStack* Stack);

int In_Stack(SqStack* Stack, SElemType* e);

int Out_Stack(SqStack* Stack, SElemType* e);

#endif
