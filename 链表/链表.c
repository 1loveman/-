#include"LNode.h"

int main() {
	struct LNode L;
	List PtrL = &L;
	PtrL->Data = 10;
	PtrL->Next = NULL;
	PtrL = Insert(20, 2, PtrL);
	PtrL = Insert(30, 3, PtrL);
	PtrL = Insert(40, 4, PtrL);
	PtrL = Insert(50, 5, PtrL);
	printf("%d\n", Length(PtrL));
	PtrL = Delete(4, PtrL);
	printf("%d\n", Length(PtrL));
	printf("%p\n", Find(40, PtrL));
	


}