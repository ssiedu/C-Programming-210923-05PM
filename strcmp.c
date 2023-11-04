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
	if(strcmp(str1,str2)==0)
		printf("\n Both Are Equal");
	else
		printf("\n Both Are Not Equal");
	getch();
}
