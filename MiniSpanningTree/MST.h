#ifndef MST_H
#define MST_H

#include <stdio.h>
//#include "MFSet.h"
#include "MGraph.h"

//
typedef struct
{
	VertexType_M adjvex; //�������ñߵĶ˵�
	VRType lowcost;		//�ߵ�Ȩֵ
}Edge;
typedef struct
{
	int a,b;
	int w;
}EdgeSetType;

void MiniSpanTree_PRIM_1(MGraph G,VertexType_M u);//Prime�㷨�ӵ�u�������������G����С������T�����T�ĸ�����
int Minimum_1(Edge closedge[],int n);				//������С������Ķ˵����


