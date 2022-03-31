#include"LNode_sq.h"


int main() {
	List L;
	Init_sq(&L);
	ElementType* e = (ElementType*)malloc(sizeof(ElementType));
	if (!e) {
		return 0;
	}
	printf("%d ", Insert_sq(&L, 1, 10));
	printf("%d ", Insert_sq(&L, 2, 20));
	printf("%d\n", Insert_sq(&L, 3, 30));
	printf("%d ", Findith(&L,1,e));
	printf("%d\n", *e);

	for (int i = 0; i < L.length; i++) {
		printf("%d\n", L.Data[i]);
	}
	

	return 0;
}