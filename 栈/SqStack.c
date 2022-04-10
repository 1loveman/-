#include"SqStack.h"

//��ʼ��
int Init_SqStack(SqStack* Stack) {
	if (!Stack) {
		return -1;
	}
	Stack->StackSize = 0;
	Stack->Base = (SElemType*)malloc(sizeof(SElemType) * MAXSIZE);
	if (!Stack->Base) {
		return -1;
	}
	Stack->Top = Stack->Base;
	return 1;
}

//�п�
int Is_Empty(SqStack* Stack) {
	if (!Stack) {
		return -1;
	}
	if (Stack->StackSize) {
		return 0;
	}
	return 1;
}

//�󳤶�
int GetLenth(SqStack* Stack) {
	if (!Stack) {
		return -1;
	}
	return (Stack->Top - Stack->Base);
}

//���˳��ջ
int Empty(SqStack* Stack) {
	if (!Stack) {
		return -1;
	}
	Stack->Top = Stack->Base;
	return 1;
}

//����
int Free(SqStack* Stack) {
	if (!Stack) {
		return -1;
	}
	free(Stack->Base);
	Stack->StackSize = 0;
	Stack->Base = Stack->Top = NULL;
	return 1;
	
}

//��ջ
int In_Stack(SqStack* Stack,SElemType* e) {
	if (!Stack||!e) {
		return -1;
	}
	if (Stack->StackSize >= MAXSIZE) {
		return 0;
	}
	*Stack->Top++ = *e;
	Stack->StackSize++;
	return 1;
}

//��ջ
int Out_Stack(SqStack* Stack, SElemType* e) {
	if (!Stack||!e) {
		return -1;
	}
	if (Stack->StackSize <= 0) {
		return 0;
	}
	*e = *(--Stack->Top);
	Stack->StackSize--;
	return 1;
}

