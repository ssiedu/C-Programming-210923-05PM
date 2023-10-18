#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	(num%2==0) ? printf("\n =Even Number"):
		printf("\n Odd Number");
	getch();
}
