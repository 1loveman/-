#include"LNode_sq.h"

//��ʼ��˳���
Status Init_sq(List* PtrL) {
	PtrL->Data = (ElementType*)malloc(sizeof(ElementType) * MAXSIZE);
	if (!PtrL->Data) {
		return OVERFLOW;
	}
	PtrL->length = 0;
	return OK;
}

//����˳���
void Destory_sq(List* PtrL) {
	if (PtrL) {
		free(PtrL);
	} 
}

//���˳���
void Empty_sq(List* PtrL) {
	PtrL->length = 0;
}

//��˳�����
int Length_sq(List* PtrL) {
	return PtrL->length;
}

//�п�
Status Determine_sq(List* PtrL) {
	if (0 == PtrL->length) {
		return 1;
	}
	return 0;
}

//����λ��i��ӦԪ�ص�����
Status Findith(List* PtrL,int i,ElementType* e) {
	if (i<1 || i>PtrL->length) {
		return ERROR;
	}
	*e = PtrL->Data[i - 1];
	return OK;
}

//����ĳ��Ԫ�ط�����ŷ��򷵻�0---���Ƿ����±ꡣ
int Find_sq(List* PtrL,ElementType e) {
	for (int i = 0; i < PtrL->length; i++) {
		if (PtrL->Data[i] == e) {
			return i+1;
		}
	}
	return 0;

}

//��λ��i����Ԫ��e
Status Insert_sq(List* PtrL, int i,ElementType e) {
	if (i<1 || i>PtrL->length + 1) {
		return ERROR;
	}
	if (PtrL->length == MAXSIZE) {
		return ERROR;
	}
	for (int j = PtrL->length-1; j >= i-1; j--) {
		PtrL->Data[j + 1] = PtrL->Data[j];
	}
	PtrL->Data[i - 1]=e;
	PtrL->length++;
	return OK;
}

//ɾ��λ��i��Ԫ��
Status Delete_sq(List* PtrL, int i) {
	if (i<1 || i>PtrL->length) {
		return ERROR;
	}
	for (int j = i - 1; j <= PtrL->length-2; j++) {
		PtrL->Data[j] = PtrL->Data[j + 1];
	}
	PtrL->length--;
	return OK;
}
