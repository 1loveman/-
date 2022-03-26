#include"LNode.h"

int main() {
	struct LNode L;
	List PtrL = &L;
	PtrL->Data = 10;
	PtrL->Next = NULL;
	printf("len = % d\n", Length(PtrL));
	PtrL = Insert(20, 1, PtrL);
	printf("len = % d\n", Length(PtrL));
	PtrL = Insert(5, 2, PtrL);
	printf("len = % d\n", Length(PtrL));

	printf("%p\n", FindKth(1, PtrL));
	printf("%p\n", FindKth(2, PtrL));
	printf("%p\n", FindKth(3, PtrL));

	PtrL = Delete(1, PtrL);
	printf("len = % d\n", Length(PtrL));
	printf("%p\n", FindKth(1, PtrL));
	printf("%p\n", FindKth(2, PtrL));
	printf("%p\n", FindKth(3, PtrL));

	printf("%p\n", Find(20, PtrL));
	printf("%p\n", Find(10, PtrL));
	printf("%p\n", Find(5, PtrL));



	return 0;
}
