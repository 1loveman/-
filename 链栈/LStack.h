#ifndef __LSTACK_H__
#define __LSTACK_H__
#include<stdlib.h>
typedef int ElemType;
typedef struct {
	ElemType Data;
	struct LNStack* Next;
}LNStack,*LStack;


//��ʼ��
int Init_LStack(LStack* D_LS);

//�п�
int Is_Empty(LStack LS);

//����
int	De_LStack(LStack* D_LS);

//���
int GetLength(LStack LS);

//ȡջ��Ԫ��
int GetStackup(LStack LS, ElemType* e);

//��ջ
int In_LStack(LStack* D_LS, ElemType* e);

//��ջ
int Out_LStack(LStack* D_LS, ElemType* e);

#endif

