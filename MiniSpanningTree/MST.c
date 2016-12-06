#include "MST.h"

void MiniSpanTree_PRIM_1(MGraph G,VertexType_M u) 
{
	int i,j,k;
	Edge closedge[G.vexnum+1];
	k=LocateVex_M(G,u);
	for(j=1;j<=G.vexnum;j++)
	{
		if(j!=k)
		{
			closedge[j].adjvex = u;
			closedge[j].lowcost = G.arcs[k][j].adj;
		}
	}
	closedge[k].lowcost = 0;
	printf("%c\n",u);
	for(i=1;i<=G.vexnum-1;i++)
	{
		k = Minimum_1(closedge,G.vexnum);
		printf("%2d,%c\n",closedge[k].lowcost,G.vexs[k]);

		closedge[k].lowcost=0;
		for(j=1;j<G.vexnum;j++)
		{
			if(G.arcs[k][j].adj<closedge[j].lowcost)
			{
				closedge[j].adjvex = G.vexs[k];
				closedge[j].lowcost = G.arcs[k][j].adj;
			}
		}
	}
}

int minimum_1(Edge closedge[],int n)
{
	int i,j;
	int min = INI_MAX;

	for(i=1;i<=n;i++)
	{
		if(closedge[i].lowcost) //从权值不为0的边中选择拥有最小权值的边
		{
			if(closedge[i].lowcost<=min)
			{
				min = closedge[i].lowcost;
				j=i;
			}	
		}
	}

	return j;
}