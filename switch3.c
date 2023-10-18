#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	switch(num%2==0)
	{
		case 0:
			printf("\n Odd Number ");
			break;
		case 1:
			printf("\n Even Number ");
			break;
		default:
			printf("\n Invalid ");
	}
	getch();
	
}
