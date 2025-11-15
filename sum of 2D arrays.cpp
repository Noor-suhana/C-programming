#include<stdio.h>
int main()
{
	int a[10][10],b[100][100],C[100][100],i,j,r,c;
	printf("enter row and column size : ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter value at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		 for(j=0;j<r;j++)
		{
				printf("\nenter values at b[%d][%d] : ",i,j);
					scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
			    	C[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("\nthe sum is : ");
		for(i=0;i<r;i++)
	    {
			for(j=0;j<c;j++)
			{
			    printf("\t%d",C[i][j]);
			}
		    	printf("\n");
		}
	return 0;
}
