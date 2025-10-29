#include <stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("\ntemprature in celcius : ");
	scanf("%f",&celcius);
	fahrenheit=(celcius*1.8)+32;
	printf("\ntemperature in fahrenheit : %f",fahrenheit);
	return 0;
}
