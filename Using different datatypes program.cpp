#include<stdio.h>
int main()
{
int age;
float weight;
char gender;
char name[200];
printf("\nenter a name : ");
scanf("%s",&name);
printf("\nenter age : ");
scanf("%d",&age);
printf("\nenter weight : ");
scanf("%f",&weight);
printf("\nenter gender : ");
scanf(" %c",&gender);
printf("\n%s\n%d\n%f\n%c",name,age,weight,gender);
}
