#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("\n Even Number");
	else
		printf("\n Odd Number");
	getch();
}
