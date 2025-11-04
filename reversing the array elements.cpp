#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;

    printf("Enter array size : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value at position arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nreverse the array elements are : ");
    for(i=n-1;i>=0;i--)
    {
    	printf("\t%d",arr[i]);	 
    } 
    return 0;
}
