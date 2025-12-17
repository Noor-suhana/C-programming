#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int length;
printf("enter a string:");
scanf("%s",&a);
printf("\nenter b string:");
scanf("%s",&b);
length=strlen(a);
printf("%d\n",length);
strcat(a,b);
puts(a);
strrev(b);
puts(b);

}
