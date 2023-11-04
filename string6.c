#include<stdio.h>
void main()
{
	char str[10];
	printf("\n Enter any string : ");
	fgets(str,10,stdin);
	printf("\n String is : ");
	puts(str);
	getch();
}
