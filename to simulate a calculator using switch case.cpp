#include<stdio.h>
int main()
{
	char op;
	double a,b;
	printf("enter an operator (+,-,*,/) : ");
	scanf("%c",&op);
	printf("\nenter two operands : ");
	scanf("%lf%lf",&a,&b);
	switch(op)
	{
		case '+':
		printf("\n%.1lf+%.1lf = %.1lf",a,b,a+b);
		break;
		case '-':
		printf("\n%.1lf-%.1lf = %.1lf",a,b,a-b);
		break;
		case '*':
		printf("\n%.1lf*%.1lf = %.1lf",a,b,a*b);
		break;
		case '/':
		printf("\n%.1lf/%.1lf = %.1lf",a,b,a/b);
		break;
		default:
		printf("\nerror!operator is not correct");
	}
	return 0;
}
