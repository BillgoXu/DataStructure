#ifndef BASE_H
#define BASE_H

#include<stdio.h>
#include<stdlib.h>
#include "Status.h"
#include "Scanf.c"
/*查找表类型定义*/
typedef int KeyType;
typedef struct
{
	int key;
	float weight;
}ElemType_Search;

typedef struct
{
	ElemType_Search *elem;
	int length;
}Table;
Status Create(FILE *fp,Table *T,int n);
void Destroy(Table *T);
void Traverse(Table T,void(Vist)(ElemType_Search));
void PrintKey(ElemType_Search e);
#endif

