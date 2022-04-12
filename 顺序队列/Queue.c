#include"Queue.h"


//��ʼ������
int Init_Que(SQuList SQL) {
	SQL->Data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZEQ);
	if (!SQL->Data) {
		return 0;
	}
	SQL->font = SQL->rear = 0;
	return 1;
}

//����г���
int GetLen_Que(SQuList SQL) {
	return (SQL->rear - SQL->font + MAXSIZEQ) % MAXSIZEQ;
}

//���
int In_Que(SQuList SQL,ElemType* e) {
	if ((SQL->rear + 1) % MAXSIZEQ == SQL->font) {
		return 0;
	}
	SQL->Data[SQL->rear] = *e;
	SQL->rear = (SQL->rear + 1) % MAXSIZEQ;
	return 1;
}

//����
int Out_Que(SQuList SQL, ElemType* e) {
	if (SQL->rear == SQL->font) {
		return 0;
	}
	*e = SQL->Data[SQL->font];
	SQL->font = (SQL->font + 1) % MAXSIZEQ;
	return 1;
}

//ȡ��ͷԪ��
int GetHead_Que(SQuList SQL, ElemType* e) {
	if (SQL->font == SQL->rear) {
		return 0;
	}
	return SQL->Data[SQL->font];
}