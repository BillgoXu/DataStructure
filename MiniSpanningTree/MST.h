#ifndef MST_H
#define MST_H

#include <stdio.h>
//#include "MFSet.h"
#include "MGraph.h"

//
typedef struct
{
	VertexType_M adjvex; //较早加入该边的端点
	VRType lowcost;		//边的权值
}Edge;
typedef struct
{
	int a,b;
	int w;
}EdgeSetType;

void MiniSpanTree_PRIM_1(MGraph G,VertexType_M u);//Prime算法从第u个点出发构造网G和最小生成树T，输出T的各条边
int Minimum_1(Edge closedge[],int n);				//返回最小边联结的端点序号


