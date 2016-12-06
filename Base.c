#include "Base.h"
Status Create(FILE *fp,Table *T,int n);
{
	int i;
	int a;
	float b;

	T->elem = (EleType_Search *)malloc((n+1)*sizeof(ElemType_Search));
	if(!(T->elem))
		exit(OVERFLOW);

	for((*T).lengh=0,i=1;i<=n;i++)
	{
		if(Scanf(fp,"%d%f",&a,&b)==2)
		{
			(*T).elem[i].key=a;
			(*T).elem[i].weight=b;
			(*T).length++;
		}
	}
	return OK;
}
void Destory(Table *T)
{
	if(T->elem)
		free(T->elem);
	T->elem = NULL;
	T->length=0;
}
