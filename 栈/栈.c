#include<stdio.h>
#include"SqStack.h"

int main() {
	int ret=0;
	SElemType e = 10;
	SqStack Stack;
	ret=Init_SqStack(&Stack);
	printf("%d\n", ret);
	ret=In_Stack(&Stack, &e);
	printf("%d\n", ret);
	ret = In_Stack(&Stack, &e);
	printf("%d\n", ret);
	ret = In_Stack(&Stack, &e);
	printf("%d\n", ret);
	ret=Out_Stack(&Stack, &e);
	printf("%d\n", ret);
	ret = GetLenth(&Stack);
	printf("%d\n", ret);
	return 0;
}