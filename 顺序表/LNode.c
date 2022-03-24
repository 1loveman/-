#include"LNode.h"

//操作之前先考虑表满或者表空 其次输入是否合法

//初始化顺序表
List MakeEmpty() {
	List PtrL;
	do {//坑，，此处如果没有判断会警告
		PtrL = (List)malloc(sizeof(struct LNode));
	} while (PtrL == NULL);
	PtrL->Last = -1;
	return PtrL;
}

//查看第K个元素
ElementType FindKth(int K,List PtrL) {
	if (PtrL->Last < 0) {
		printf("表空\n");
		return -1;
	}
	if (K<1 || K>PtrL->Last + 1) {
		printf("查看不合法\n");
		return -1;
	}
	return PtrL->Data[K-1];
}

//查找元素对应下标
int Find(ElementType X,List PtrL) {
	for (int i = 0; i <= PtrL->Last; i++) {
		if (PtrL->Data[i] == X) {
			return i;
		}
	}
	return -1;
}

//在第K个元素之前插入//此处能末尾第一个也能插入
void Insert(ElementType X,int K,List PtrL) {
	if (PtrL->Last == MAXSIZE - 1) {
		printf("顺序表已满！\n");
		return;
	}
	if (K<1||K>PtrL->Last+2) {
		printf("插入不合法！");
		return;
	}
	for (int i = PtrL->Last; i >= K-1 ; i--) {
		PtrL->Data[i+1] = PtrL->Data[i];
	}
	PtrL->Data[K-1] = X;
	PtrL->Last++;
	return;
}

//删除第K个元素
void Delete(int K,List PtrL) {
	if (K<1 || K>PtrL->Last + 1) {
		printf("删除位置不合法！\n");
		return;
	}
	for (int i = K - 1; i <= PtrL->Last; i++) {
		PtrL->Data[i] = PtrL->Data[i+1];
	}
	PtrL->Last--;

}

//返回顺序表长度
int Length(List PtrL) {
	return PtrL->Last + 1;
}

