#include<stdio.h>
int LCM(int a,int b);
int main()
{
	int n1,n2,result;
	printf("\nenter n1 and n2 values : ");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		result = LCM(n2,n1);
	}
	else
	{
		result = LCM(n1,n2);
	}
	printf("\n%d and %d LCM is %d",n1,n2,result);
}
int LCM(int a,int b)
{
	static int mul=0;
	mul=mul+b;
	if(mul %a==0&&mul %b==0)
	{
		return mul;
	}
	else
	{
		LCM(a,b);
	}
}

