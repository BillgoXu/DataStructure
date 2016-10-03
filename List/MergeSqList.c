//MergeSqList.c 
//Algorithm :2.2

#ifndef MERGSQLIST_C
#define MERGSQLIST_C

#include "MergeSqList.h"

void MergeSqList(SqList La, SqList Lb, SqList *Lc){
	int La_len, Lb_len;
	int i ,j,k;
	LElemType_Sq ai,bj;

	i = j = 1;
	k = 0;
	InitList_Sq(Lc);
	La_len = ListLenth_Sq(La);
	Lb_len = ListLenth_Sq(Lb) ;

	while (i<=La_len && j<= Lb_len){

		GetElem_Sq(La,i,&ai);
		GetElem_Sq(Lb,j,&bj);

		if(ai<=bj){
			ListInsert_Sq(Lc,++k,ai);
			i++;
		}
		else{
			ListInsert_Sq(Lc,++k,bj);
			j++;
		}	 
	}

	while(i<=La_len){
		GetElem_Sq(La,i++,&ai);
		ListInsert_Sq(Lc,++k,ai);
	}

	while(j<=Lb_len){
		GetElem_Sq(Lb, j++,&bj);
		ListInsert_Sq(Lc,++k,bj);
	}
}
#endif