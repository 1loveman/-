#ifndef __QUEUE_H__
#define __QUEUE_H__
#include"stdlib.h"
#define MAXSIZEQ 3
typedef int ElemType;
typedef struct {
	ElemType* Data;
	int font;
	int rear;
}SQueue,*SQuList;

//��ʼ������
int Init_Que(SQuList SQL);

//����г���
int GetLen_Que(SQuList SQL);

//���
int In_Que(SQuList SQL, ElemType* e);

//����
int Out_Que(SQuList SQL, ElemType* e);

//ȡ��ͷԪ��
int GetHead_Que(SQuList SQL, ElemType* e);

#endif

