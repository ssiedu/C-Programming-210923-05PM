#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len;
	printf("\n Enter any string : ");
	gets(str);
	len=strlen(str);
	printf("\n Total number of character in string : %d",len);
	getch();
}
