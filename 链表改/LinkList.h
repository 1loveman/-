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

//初始化
Status Init_Ll(LinkList L);

//判空
Status IsEmpty_Ll(LinkList L);

//销毁
void Destroy_Ll(LinkList L);

//清空
void Empty_Ll(LinkList L);

//求链表长度
int Length_Ll(LinkList L);

//查找按位序
Status Findth_Ll(LinkList L, int i, ElementType* e);

//查找值返回地址
LNode* Find_Add_Ll(LinkList L, ElementType e);

//查找值返回位序
int Find_Ordet_Ll(LinkList L, ElementType e);

//插入元素
Status Insert_Ll(LinkList L, int i, ElementType e);

//删除元素
Status Delete(LinkList L, int i);

//头插法
LinkList H_Great(LinkList L, int n);

//尾插法
LinkList T_Great(LinkList L, int n);

#endif