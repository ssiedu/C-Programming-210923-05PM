#include<stdio.h>
void main()
{
	int year;
	printf("\n Enter Year : ");
	scanf("%d",&year);
	(year%4==0)?
		printf("\n Leap Year"):
		printf("\n Not Leap Year");
	getch();
}
