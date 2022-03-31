#ifndef __LNODE_SQ_H__
#define __LNODE_SQ_H__
#include<stdio.h>	
#include<stdlib.h>
#define MAXSIZE 10
#define TURE 1
#define FALSE 0
#define INFEASIBLLE -1
#define OVERFLOW -2
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElementType;
typedef struct LNode {
	ElementType* Data;
	int length;
}List;

//��ʼ��˳���
Status Init_sq(List* PtrL);

//����˳���
void Destory_sq(List* PtrL);

//���˳���
void Empty_sq(List* PtrL);

//��˳�����
int Length_sq(List* PtrL);

//�п�
Status Determine_sq(List* PtrL);

//����λ��i��ӦԪ�ص�����
Status Findith(List* PtrL, int i, ElementType* e);

//����ĳ��Ԫ�ط�����ŷ��򷵻�0---���Ƿ����±ꡣ
int Find_sq(List* PtrL, ElementType e);

//��λ��i����Ԫ��e
Status Insert_sq(List* PtrL, int i, ElementType e);

//ɾ��λ��i��Ԫ��
Status Delete_sq(List* PtrL, int i);





#endif
