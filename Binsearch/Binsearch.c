#include "Binsearch.h"

int Search_Bin(Table T,KeyType k)
{
	int low,high,mid;
	low = 1;
	high = T.lengh;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(EQ(key,T.elem[mid].key))
			return mid;
		else if(LT(key,T.elem[mid].key))
			high = mid-1;
		else
			low = mid + 1;
	}
	return 0;
}

#endif