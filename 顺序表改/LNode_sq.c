#include"LNode_sq.h"

//初始化顺序表
Status Init_sq(List* PtrL) {
	PtrL->Data = (ElementType*)malloc(sizeof(ElementType) * MAXSIZE);
	if (!PtrL->Data) {
		return OVERFLOW;
	}
	PtrL->length = 0;
	return OK;
}

//销毁顺序表
void Destory_sq(List* PtrL) {
	if (PtrL) {
		free(PtrL);
	} 
}

//清空顺序表
void Empty_sq(List* PtrL) {
	PtrL->length = 0;
}

//求顺序表长度
int Length_sq(List* PtrL) {
	return PtrL->length;
}

//判空
Status Determine_sq(List* PtrL) {
	if (0 == PtrL->length) {
		return 1;
	}
	return 0;
}

//查找位置i对应元素的内容
Status Findith(List* PtrL,int i,ElementType* e) {
	if (i<1 || i>PtrL->length) {
		return ERROR;
	}
	*e = PtrL->Data[i - 1];
	return OK;
}

//查找某个元素返回序号否则返回0---不是返回下标。
int Find_sq(List* PtrL,ElementType e) {
	for (int i = 0; i < PtrL->length; i++) {
		if (PtrL->Data[i] == e) {
			return i+1;
		}
	}
	return 0;

}

//在位置i插入元素e
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

//删除位置i的元素
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
