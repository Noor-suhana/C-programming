#include <stdio.h>
int main() 
{
    float base, height, area;
    printf("enter base and height values : ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("\nthe area of triangle = %.2f", area);
    return 0;
}


