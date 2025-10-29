#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values : ");
	scanf("%d%d",&a,&b);
	printf("\n***USING BITWISE OPERATORS***");
	printf("\nusing bitwise operator(&) on %d&%d : %d",a,b,a&b);
	printf("\nusing bitwise operator(|) on %d|%d : %d",a,b,a|b);
	printf("\nusing bitwise operator(^) on %d^%d : %d",a,b,a^b);
	printf("\nusing bitwise operator left shift on %d<<%d :%d",a,b,a<<b);
	printf("\nusing bitwise operator right shift on %D>>%d :%d",a,b,a>>b);
	printf("\nusing bitwise operator(~) on %d~%d : %d",a,b,~a);
	return 0;
}
