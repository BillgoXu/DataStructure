//��С�����������ļ�
#include <stdio.h>
#include "MST.c"

int main(int argc,char *argv[])
{
	MGraph G;
	printf("��ʼ�������������");
	{
		FILE *fp;

		fp=fopen("TestData_UDM_M.txt","r");
		CreatGraph_M(fp,&G);
		fclose(fp);
		outputMgraph(G);
		printf("\n");
	}
	PressEnter;
	
	printf("Prime�㷨����...\n");
	{
		printf("�Ⱥ������С���������ڵ㼰����С�ߵ�Ȩֵ�ֱ�Ϊ:\n");
		MiniSpanTree_PRIM_1(G,'A');
		printf("\n");
	}
	PressEnter;
//�����
}