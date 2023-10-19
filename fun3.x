//function without argument and without return type
#include<stdio.h>
void Addition();
void main()
{
	Addition();
	getch();
}
void Addition()
{
	int n1,n2;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	printf("\n sum is : %d",n1+n2);
}
