#include<stdio.h>
int main()
{
	int a,b,sum,diff;
	printf("enter a and b values : ");
	scanf("%d%d",&a,&b);
	sum = a+b;
	diff = a-b;
	printf("sum of digits=%d",sum);
	printf("\ndiff of digits=%d",diff);
	return 0;
}
