#include <stdio.h>
int main()
{
	int units;
	float amount,charge,total_amount;
	printf("enter units consumed : ");
	scanf("%D",&units);
	if(units<=50)
	{
		amount=units*2.5;
		charge=25;
	}
	else if(units<=100)
	{
		amount=units*30;
		charge=50;
	}
	else if(units<=300)
	{
		amount=units*4.0;
		charge=100;
	}
	else
	{
		amount=units*5.0;
		charge=125;
	}
	total_amount = amount+charge;
	printf("\ntotal_amount is %.2f",total_amount);
	return 0;
}
