#include<stdio.h>
#include"LStack.h"


int main() {
	ElemType e = 10;
	int ret;
	LStack LS;
	ret = Init_LStack(&LS);
	printf("%d\n", ret);
	ret=In_LStack(&LS,&e);
	printf("%d", ret);
	ret = In_LStack(&LS, &e);
	printf("%d", ret);
	ret = In_LStack(&LS, &e);
	printf("%d\n", ret);
	ret=De_LStack(&LS);
	printf("%d\n", ret);
	ret=GetLength(LS,&e);
	printf("%d\n", ret);
	
	return 0;
}