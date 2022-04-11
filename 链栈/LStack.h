#ifndef __LSTACK_H__
#define __LSTACK_H__
#include<stdlib.h>
typedef int ElemType;
typedef struct {
	ElemType Data;
	struct LNStack* Next;
}LNStack,*LStack;


//初始化
int Init_LStack(LStack* D_LS);

//判空
int Is_Empty(LStack LS);

//销毁
int	De_LStack(LStack* D_LS);

//求表长
int GetLength(LStack LS);

//取栈顶元素
int GetStackup(LStack LS, ElemType* e);

//入栈
int In_LStack(LStack* D_LS, ElemType* e);

//出栈
int Out_LStack(LStack* D_LS, ElemType* e);

#endif

