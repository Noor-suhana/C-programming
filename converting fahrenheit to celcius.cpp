#include <stdio.h>
int main()
{
	float fahrenheit,celcius;
	printf("\ntemperature in fahrenheit : ");
	scanf("%f",&fahrenheit);
	celcius=(fahrenheit-32)/1.8;
	printf("temperature in celcius : %f",celcius);
	return 0;
	
}
