#include <stdio.h>
#include "Binsearch.c"

#define MAX 100

int main()
{
	Table T;
	int key;
	int flag;
	printf("创建并输出一个查找表...\n");
	{
		FILE *fp;

		fp=fopen("TestData_Table.txt","r");
		Create(fp,&T,MAX);
		Traverse(T,PrintKey);
		printf("\n");
	}
	PressEnter;
	printf("折半查找测试...\n");
	{
		printf("输入查找关键字:");
		scanf("%d",&key);
		flag=Search_Bin(T,39);
		if(flag)
			printf("关键字%d在有序查找表中的位序是:%d\n",key,flag);
		else
			printf("不存在!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}