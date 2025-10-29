#include <stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter length and breadth values : ");
	scanf("%f%f",&length,&breadth);
	area = length*breadth;
	printf("the area of rectangle is %.2f ",area);
	return 0;
}

