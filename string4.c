#include<stdio.h>
void main()
{
	char str[11];
	printf("\n Enter String : ");
	scanf("%[^\n]s",&str);
	printf("\n String is : %s",str);
	getch();
}
