#include<stdio.h>
int a=100;
void main()
{
	int a=50;
	
	{	
		int a=10;
	    printf("\n value of a : %d",a);	
	}
	printf("\n value of a : %d",a);
	getch();
}
