#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElementType;
typedef struct {
	ElementType Data;
	struct LNode* Next;
}LNode,*LinkList;

//��ʼ��
Status Init_Ll(LinkList L);

//�п�
Status IsEmpty_Ll(LinkList L);

//����
void Destroy_Ll(LinkList L);

//���
void Empty_Ll(LinkList L);

//��������
int Length_Ll(LinkList L);

//���Ұ�λ��
Status Findth_Ll(LinkList L, int i, ElementType* e);

//����ֵ���ص�ַ
LNode* Find_Add_Ll(LinkList L, ElementType e);

//����ֵ����λ��
int Find_Ordet_Ll(LinkList L, ElementType e);

//����Ԫ��
Status Insert_Ll(LinkList L, int i, ElementType e);

//ɾ��Ԫ��
Status Delete(LinkList L, int i);

//ͷ�巨
LinkList H_Great(LinkList L, int n);

//β�巨
LinkList T_Great(LinkList L, int n);

#endif