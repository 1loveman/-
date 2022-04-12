#include<stdio.h>
#include"Queue.h"


int main() {
	int ret = 10;
	SQueue SQ;
	ret=Init_Que(&SQ);
	printf("%d\n", ret);
	

	ret = In_Que(&SQ, &ret);
	printf("%d", ret);

	ret = 10;
	GetHead_Que(&SQ,&ret);
	printf("%d\n", ret);

	ret = Out_Que(&SQ,&ret);
	printf("%d\n", ret);

	ret = GetLen_Que(&SQ);
	printf("%d\n", ret);

	return 0;
}