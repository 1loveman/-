#include"LNode.h"

//返回链表长度
int Length(List PtrL) {
	int i = 0;
	while (PtrL) {
		PtrL = PtrL->Next;
		i++;
	}
	return i;
}

//求第K个结点
List FindKth(int K, List PtrL) {
	int i = 1;
	while (PtrL && i < K) {
		PtrL = PtrL->Next;
		i++;
	}
	if (i == K) {
		return PtrL;
	}
	return NULL;
}

//求第一个X出现的结点
List Find(ElementType X,List PtrL) {
	while (PtrL && PtrL->Data != X) {
		PtrL = PtrL->Next;
	}
	return PtrL;
}

//在第i个结点前插入一个X结点
List Insert(ElementType X, int i,List PtrL) {
	List p, s;
	if (1 == i) {
		s = (List)malloc(sizeof(struct LNode));
		if (!s) {
			return NULL;
		}
		s->Next = PtrL;
		s->Data = X;
		return s;
	}
	p = FindKth(i - 1, PtrL);
	if (!p) {
		return NULL;
	}
	else {
		s = (List)malloc(sizeof(struct LNode));
		if (!s) {
			return NULL;
		}
		s->Next = p->Next;
		p->Next = s;
		s->Data = X;
		return PtrL;

	}

}

//删除第i个结点
List Delete(int i,List PtrL) {
	List p,s;
	if (1 == i) {
		s = PtrL;
		if (PtrL) {
			PtrL = PtrL->Next;
			free(s);
		}
		return PtrL;
	}
	p = FindKth(i - 1, PtrL);
	if (!p) {
		printf("失败\n");
		return NULL;
	}
	else if (!p->Next) {
		printf("失败\n");
		return NULL;
	}
	else {
		s = PtrL->Next;
		p->Next = s->Next;
		free(s);
		return PtrL;
	}

}