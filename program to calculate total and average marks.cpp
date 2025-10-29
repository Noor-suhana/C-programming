#include <stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float average;
	printf("enter five subject marks : ");
	scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	average = total/5;
	printf("\nthe total marks is %d",total);
	printf("\naverage marks is %.2f",average);
	return 0;
	
}
