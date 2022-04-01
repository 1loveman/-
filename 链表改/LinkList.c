#include"LinkList.h"

//��ʼ��
Status Init_Ll(LinkList L) {
	L = (LinkList)malloc(sizeof(LNode));
	if (!L) {
		return ERROR;
	}
	L->Next = NULL;
	return OK;
}

//�п�
Status IsEmpty_Ll(LinkList L) {
	if (!L) {
		return -1;
	}
	if (!L->Next) {
		return 1;
	}
	return 0;
}

//����
void Destroy_Ll(LinkList L) {
	LNode* tmp=NULL;
	while (L) {
		tmp = L;
		L = L->Next;
		free(tmp);
	}
}

//���
void Empty_Ll(LinkList L) {
	LNode* tmp=NULL;
	assert(L!=NULL);
	if (!L) {
		return;
	}
	while (L->Next) {
		tmp = L->Next;
		L->Next = tmp->Next;
		free(tmp);
	}
}

//��������
int Length_Ll(LinkList L) {
	if (!L) {
		return ERROR;
	}
	int count = 0;
	while (L->Next) {
		count++;
		L = L->Next;
	}
	return count;
}

//���Ұ�λ��
Status Findth_Ll(LinkList L,int i,ElementType* e) {
	if(!L){
		return ERROR;
	}
	LNode* tmp = L->Next;
	int j = 1;
	while (tmp && j < i) {
		tmp = tmp->Next;
		j++;
	}
	if (!tmp || j > i) {
		return ERROR;
	}
	*e = tmp->Data;
	return OK;
}

//����ֵ���ص�ַ
LNode* Find_Add_Ll(LinkList L,ElementType e) {
	if (!L) {
		return NULL;
	}
	LNode* tmp=L->Next;
	while (tmp && tmp->Data != e) {
		tmp = tmp->Next;
	}
	return tmp;

}

//����ֵ����λ��
int Find_Ordet_Ll(LinkList L, ElementType e) {
	if (!L) {
		return -1;
	}
	LNode* tmp = L->Next;
	int count = 1;
	while (tmp && tmp->Data != e) {
		tmp = tmp->Next;
		count++;
	}
	if (tmp) {
		return count;
	}
	return ERROR;
}

//����Ԫ��
Status Insert_Ll(LinkList L, int i, ElementType e) {
	LNode* tmp = L;
	int j = 0;
	while (tmp && j < i - 1) {
		tmp = tmp->Next;
		j++;
	}
	if (!tmp || j > i - 1) {
		return ERROR;
	}
	LNode* p = (LNode*)malloc(sizeof(LNode));
	if (!p) {
		return ERROR;
	}
	p->Data = e;
	p->Next = tmp->Next;
	tmp->Next = p;
	return OK;
}

//ɾ��Ԫ��
Status Delete(LinkList L, int i) {
	LNode* tmp ;
	LNode* p = NULL;
	int j = 0;
	tmp = L;
	if (!tmp) {
		return ERROR;
	}
	while ((tmp->Next)&& j < i - 1) {
		tmp = tmp->Next;
		j++;
	}
	if (!(tmp->Next)|| j > i - 1) {
		return ERROR;
	}
	p = tmp->Next;
	tmp->Next = p->Next;
	free(p);
	return OK;
}

//ͷ�巨
LinkList H_Great(LinkList L,int n) {
	L = (LNode*)malloc(sizeof(LNode));
	if (!L) {
		return NULL;
	}
	L->Next = NULL;

	int j = n;
	while (j < 0) {
		LNode* tmp = (LNode*)malloc(sizeof(LNode));
		if (!tmp) {
			return NULL;
		}
		scanf("%d", &tmp->Data);
		tmp->Next = L->Next;
		L->Next = tmp;
		j--;
	}
	return L;
}

//β�巨
LinkList T_Great(LinkList L, int n) {
	L = (LNode*)malloc(sizeof(LNode));
	LNode* t = L;
	if (!L) {
		return NULL;
	}
	L->Next = NULL;
	
	int j = 0;
	while (j < n) {
		LNode* tmp = (LNode*)malloc(sizeof(LNode));
		if (!tmp) {
			return NULL;
		}
		scanf("%d", &tmp->Data);
		tmp->Next = t->Next;
		t->Next = tmp;
		t = t->Next;
		n--;
	}
	return L;
}
