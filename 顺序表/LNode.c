#include"LNode.h"

//����֮ǰ�ȿ��Ǳ������߱�� ��������Ƿ�Ϸ�

//��ʼ��˳���
List MakeEmpty() {
	List PtrL;
	do {//�ӣ����˴����û���жϻᾯ��
		PtrL = (List)malloc(sizeof(struct LNode));
	} while (PtrL == NULL);
	PtrL->Last = -1;
	return PtrL;
}

//�鿴��K��Ԫ��
ElementType FindKth(int K,List PtrL) {
	if (PtrL->Last < 0) {
		printf("���\n");
		return -1;
	}
	if (K<1 || K>PtrL->Last + 1) {
		printf("�鿴���Ϸ�\n");
		return -1;
	}
	return PtrL->Data[K-1];
}

//����Ԫ�ض�Ӧ�±�
int Find(ElementType X,List PtrL) {
	for (int i = 0; i <= PtrL->Last; i++) {
		if (PtrL->Data[i] == X) {
			return i;
		}
	}
	return -1;
}

//�ڵ�K��Ԫ��֮ǰ����//�˴���ĩβ��һ��Ҳ�ܲ���
void Insert(ElementType X,int K,List PtrL) {
	if (PtrL->Last == MAXSIZE - 1) {
		printf("˳���������\n");
		return;
	}
	if (K<1||K>PtrL->Last+2) {
		printf("���벻�Ϸ���");
		return;
	}
	for (int i = PtrL->Last; i >= K-1 ; i--) {
		PtrL->Data[i+1] = PtrL->Data[i];
	}
	PtrL->Data[K-1] = X;
	PtrL->Last++;
	return;
}

//ɾ����K��Ԫ��
void Delete(int K,List PtrL) {
	if (K<1 || K>PtrL->Last + 1) {
		printf("ɾ��λ�ò��Ϸ���\n");
		return;
	}
	for (int i = K - 1; i <= PtrL->Last; i++) {
		PtrL->Data[i] = PtrL->Data[i+1];
	}
	PtrL->Last--;

}

//����˳�����
int Length(List PtrL) {
	return PtrL->Last + 1;
}

