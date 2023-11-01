#include<stdio.h>
void main()
{
	int i,n,fact=1;
	int *p=&n;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=*p;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial of a number : %d",fact);
	getch();
}
