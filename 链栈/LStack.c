#include"LStack.h"

//��ʼ��
int Init_LStack(LStack* D_LS) {
	*D_LS = NULL;
	return 1;
}

//�п�
int Is_Empty(LStack LS) {
	if (!LS) {
		return 1;
	}
	return 0;
}

//����
int	De_LStack(LStack* D_LS) {
	while (*D_LS) {
		LNStack* p = *D_LS;
		*D_LS = (*D_LS)->Next;
		free(p);
	}
	return 1;
}

//���
int GetLength(LStack LS) {
	int i = 0;
	while (LS) {
		i++;
		LS = LS->Next;
	}
	return i;
}

//ȡջ��Ԫ��
int GetStackup(LStack LS,ElemType*e) {
	if (!LS) {
		return -1;
	}
	*e=LS->Data;
	return 1;
}

//��ջ
int In_LStack(LStack* D_LS,ElemType* e) {
	LNStack* p = (LNStack*)malloc(sizeof(LNStack));
	if (!p||!e) {
		return -1;
	}
	p->Data = *e;
	p->Next = *D_LS;
	*D_LS = p;
	return 1;
}

//��ջ
int Out_LStack(LStack* D_LS, ElemType* e) {
	if (!*D_LS || !e) {
		return -1;
	}
	LNStack* p = NULL;
	*e = (*D_LS)->Data;
	p = (*D_LS);
	(*D_LS) = (*D_LS)->Next;
	free(p);
	p = NULL;
	return 1;
}