#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter String 1 : ");
	gets(str1);
	printf("\n Enter String 2 : ");
	gets(str2);
	strcat(str1,str2);
	printf("\n String 1 : %s",str1);
	printf("\n String 2 : %s",str2);
	getch();
}
