#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10];
	printf("\n Enter any String : ");
	gets(str1);
	printf("\n String is : %s",str1);
	printf("\n upper case String : %s",strupr(str1));
	getch();
}
