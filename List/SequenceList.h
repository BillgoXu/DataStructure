//SequenceList.h
//operations of seqential list.
#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Status.h"

#define LIST_INIT_SIZE 100//The initial allocation sequence list space.
#define LIST_INCREMENT 10//Allocation incremental sequence list storage space.

typedef int LElemType_Sq;//sequence list type defintions.
typedef struct {
	LElemType_Sq *elem;
	int length;
	int listsize;
}SqList;
Status initList_Sq(SqList *L);
int      ListLenth_Sq(SqList L);
Status GetElem_Sq(SqList L, int i, LElemType_Sq *e);
Status ListInsert_Sq(SqList *L,int i, LElemType_Sq e);
Status ListTraverse_Sq(SqList L, void (Visit)(LElemType_Sq)); 
#endif