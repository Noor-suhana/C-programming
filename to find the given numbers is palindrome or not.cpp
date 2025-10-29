#include <stdio.h>
int main()
{
	int n, r=0,s=0,num;
	printf("enter a number : ");
	scanf("%d",&n);
	num = n;
	while(n>0)
	{
		r = n%10;
		s = s*10+r;
		n = n/10;
	}
	if(num==s)
	{
		printf("\n%d is a palindrome",num);
	}
	else
	{
		printf("\n%d is not a palindrome",num);
	}
	return 0;
}
