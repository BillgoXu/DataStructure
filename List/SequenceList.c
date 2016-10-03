#ifndef SEQUENCELIST_C
#define SEQUENCELIST_C

#include "SequenceList.h" 

Status InitList_Sq(SqList *L)
{
	(*L).elem = (LElemType_Sq*)malloc(LIST_INIT_SIZE*sizeof(LElemType_Sq));
	if(!(*L).elem)
		exit(OVERFLOW); 				

	(*L).length = 0;					
	(*L).listsize = LIST_INIT_SIZE;		

	return OK;							
} 
Status GetElem_Sq(SqList L, int i, LElemType_Sq *e)
{ 
	if(i<1 || i>L.length)
		return ERROR;					
	else
		*e = L.elem[i-1];

	return OK;
}
Status ListInsert_Sq(SqList *L, int i, LElemType_Sq e)
{
	LElemType_Sq *newbase; 
	LElemType_Sq *p, *q;

	if(i<1 || i>(*L).length+1)
		return ERROR;					

	if((*L).length >= (*L).listsize)	
	{
		newbase = (LElemType_Sq*)realloc((*L).elem, ((*L).listsize+LIST_INCREMENT)*sizeof(LElemType_Sq));
		if(!newbase)
			exit(OVERFLOW);

		(*L).elem = newbase;
		(*L).listsize += LIST_INCREMENT;
	}
	
	q = &(*L).elem[i-1];				
	
	for(p=&(*L).elem[(*L).length-1]; p>=q; --p){
		*(p+1) = *p;					
	}
	
	*q = e;								
	(*L).length++;						

	return OK; 
}
Status ListTraverse_Sq(SqList L, void(Visit)(LElemType_Sq))
{
	int i;
	for (i = 0; i < L.length; ++i)
	{
		Visit(L.elem[i]);/* code */
	}
}
#endif
