#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	if(num==0)
		printf("\n Number is Zero");
		
	else if(num>0)
	{
		printf("\n Positive Number");
		if(num%2==0)
			printf("\n Even Number");
		else
			printf("\n Odd Number ");
	}
	else
	{
		printf("\n Negative Number");
		if(num%2==0)
			printf("\n Even Number");
		else
			printf("\n Odd Number");
	}
	getch();
}
