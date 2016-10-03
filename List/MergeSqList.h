//MergeSqList.h
//operations of merging seqential list.
#ifndef MERGESQLIST_H
#define MERGESQLIST_H

#include <stdlib.h>
#include "SequenceList.c"
void MergeSqList(SqList La, SqList Lb, SqList *Lc);
//Initial conditions: SqList La and Lb in the value of non-descending.
//Operating Results:Merage La and Lb to get Lc.

#endif