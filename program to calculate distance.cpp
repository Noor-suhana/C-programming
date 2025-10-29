#include <stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("\nenter value of acceleration : ");
	scanf("%f",&a);
	printf("\nenter value of initial velocity : ");
	scanf("%f",&u);
	printf("\nenter value of time : ");
	scanf("%d",&t);
	d = (u*t)+(a*t*t)/2;
	printf("\nthe distance  = %.2f",d);
	return 0;
	
}
