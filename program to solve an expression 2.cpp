#include <stdio.h>
int main()
{
	int i=5,j;
	j = (i++)+(++i);
	printf("\nthe value of j is %d",j);
	return 0;	
}
