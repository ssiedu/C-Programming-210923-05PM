#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	if(num==0)
		printf("\n Zero");	
	else if (num%2!=0)
		printf("\n Odd Number");
	else
		printf("\n Even number");
	getch();
}
