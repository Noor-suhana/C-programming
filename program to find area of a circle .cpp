#include<stdio.h>
#define pi 3.14
int main()
{
	float radius,area;
	printf("enter radius of circle : ");
	scanf("%f",&radius);
	area = pi*radius*radius;
	printf("the area of cicle = %.2f",area);
	return 0;
}
