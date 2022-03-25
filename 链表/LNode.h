#ifndef __LNODE_H__
#define __LNODE_H__
#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
typedef struct LNode* List;
struct LNode {
	ElementType Data;
	List Next;
};
//�����������
int Length(List PtrL);

//���ص�K������ַ
List FindKth(int K, List PtrL);

//����X���ڽ��
List Find(ElementType X, List PtrL);

//�ڵ�i�����֮ǰ����X
List Insert(ElementType X, int i, List PtrL);

//ɾ����i�����
List Delete(int i, List PtrL);


#endif