#include"LinkList.h"

//初始化
Status Init_Ll(LinkList L) {
	L = (LinkList)malloc(sizeof(LNode));
	if (!L) {
		return ERROR;
	}
	L->Next = NULL;
	return OK;
}

//判空
Status IsEmpty_Ll(LinkList L) {
	if (!L) {
		return -1;
	}
	if (!L->Next) {
		return 1;
	}
	return 0;
}

//销毁
void Destroy_Ll(LinkList L) {
	LNode* tmp=NULL;
	while (L) {
		tmp = L;
		L = L->Next;
		free(tmp);
	}
}

//清空
void Empty_Ll(LinkList L) {
	LNode* tmp=NULL;
	while (L->Next) {
		tmp = L->Next;
		L->Next = tmp->Next;
		free(tmp);
	}
}

//求链表长度
int Length_Ll(LinkList L) {
	int count = 0;
	while (L->Next) {
		count++;
	}
	return count;
}

//查找按位序
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

//查找值返回地址
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

//查找值返回位序
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
	return -1;
}

//插入元素
Status Insert_Ll(LinkList L, int i, ElementType e) {
	LNode* tmp = L;
	int j = 0;
	while (tmp && j < i - 1) {
		tmp = tmp->Next;
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
