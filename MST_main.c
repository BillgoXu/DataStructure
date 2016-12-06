//最小生成树测试文件
#include <stdio.h>
#include "MST.c"

int main(int argc,char *argv[])
{
	MGraph G;
	printf("初始化并输出无向网");
	{
		FILE *fp;

		fp=fopen("TestData_UDM_M.txt","r");
		CreatGraph_M(fp,&G);
		fclose(fp);
		outputMgraph(G);
		printf("\n");
	}
	PressEnter;
	
	printf("Prime算法测试...\n");
	{
		printf("先后加入最小生成树各节点及其最小边的权值分别为:\n");
		MiniSpanTree_PRIM_1(G,'A');
		printf("\n");
	}
	PressEnter;
//待添加
}