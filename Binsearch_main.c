#include <stdio.h>
#include "Binsearch.c"

#define MAX 100

int main()
{
	Table T;
	int key;
	int flag;
	printf("���������һ�����ұ�...\n");
	{
		FILE *fp;

		fp=fopen("TestData_Table.txt","r");
		Create(fp,&T,MAX);
		Traverse(T,PrintKey);
		printf("\n");
	}
	PressEnter;
	printf("�۰���Ҳ���...\n");
	{
		printf("������ҹؼ���:");
		scanf("%d",&key);
		flag=Search_Bin(T,39);
		if(flag)
			printf("�ؼ���%d��������ұ��е�λ����:%d\n",key,flag);
		else
			printf("������!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}