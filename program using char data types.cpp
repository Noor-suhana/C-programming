#include<stdio.h>
int main()
{
	char a;
	char word[200];
	char sentence[2000];
	printf("enter a letter : ");
	scanf(" %c",&a);
	printf("\nenter a word : ");
	scanf("%s",&word);
	printf("\nenter a sentence : ");
	scanf(" %[^\n]",sentence);
	printf("\nthe letter is %c\nthe word is %s\n the sentence is %s",a,word,sentence);
	}
