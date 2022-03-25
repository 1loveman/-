#include"LNode.h"

//�������
int Length(List PtrL) {
	int i = 0;
	while (PtrL) {
		PtrL = PtrL->Next;
		i++;
	}
	return i;
}

//���ص�K������ַ
List FindKth(int K, List PtrL) {
	int i = 1;
	while (i < K && PtrL) {
		PtrL = PtrL->Next;
		i++;
	}
	if (i == K) {
		return PtrL;
	}
	return NULL;
}

//����X���ڽ��
List Find(ElementType X, List PtrL) {
	while (PtrL != NULL && PtrL->Data != X ) {//�˴�˳���ܸ�
		PtrL = PtrL->Next;
	}
	return PtrL;
}

//�ڵ�i�����֮ǰ����X 
List Insert(ElementType X, int i, List PtrL) {
	List s, p;
	if (1 == i) {
		s=(List)malloc(sizeof(struct LNode));
		if (!s) {
			return NULL;
		}
		s->Data = X;
		s->Next = PtrL;
		return s;
	}
	p = FindKth(i - 1, PtrL);
	if (!p) {
		return NULL;
	}
	else if (!p->Next) {
		s = (List)malloc(sizeof(struct LNode));
		if (!s) {
			return NULL;
		}
		p->Next = s;
		s->Data = X;
		s->Next = NULL;
		return PtrL;
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

//ɾ����i�����
List Delete(int i, List PtrL) {
	List p,s;
	if (1 == i) {
		p = PtrL;
		if (p) {
			PtrL = PtrL->Next;
			free(p);
		}
		return PtrL;
	}
	p = FindKth(i - 1, PtrL);
	if (!p) {
		return NULL;
	}
	else if (!p->Next) {
		return NULL;
	}
	else {
		s = p->Next;
		p->Next = s->Next;
		free(s);
		return PtrL;
	}

}

