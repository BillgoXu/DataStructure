#include <stdio.h>
#include "MergeSqList.c"
void PrintELem(LElemType_Sq e);
int main(int argc, char **argv)
{
	SqList La, Lb, Lc;
	LElemType_Sq a[4] = {3,5,8,11};
	LElemType_Sq b[7] = {2,6,8,9,11,15,20};
	int i;
	
	InitList_Sq(&La);
	for(i = 1;i<=4;i++){
		ListInsert_Sq(&La,i,a[i-1]);
	}
	InitList_Sq(&Lb);
	for(i<=1;i<=7;i++){
		ListInsert_Sq(&Lb,i,b[i-1]);
	}
	printf("La = ");
	ListTraverse_Sq(La, PrintELem);
	printf("\n");
	printf("Lb = \n");
	ListTraverse_Sq(Lb,PrintELem);
	printf("\n");

	MergeSqList(La,Lb,&Lc);
	printf("MergeSqlist La and Lb:\n");
	ListTraverse_Sq(Lc,PrintELem);
	return 0;
}
void PrintELem(LElemType_Sq e)
{
	printf("%d\n",e );
}