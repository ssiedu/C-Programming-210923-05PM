#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10]="apple";
	char str2[10];
	do
	{
		printf("\n Enter your Fav fruit : ");
		gets(str2);
	}while(strcmp(str1,str2)!=0);
	printf("\n You are correct!");
	getch();
}
