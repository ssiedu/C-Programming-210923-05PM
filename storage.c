#include<stdio.h>
int a=100;
void main()
{
	//int a=20;
	{
		//int a=30;
		printf("\n In Block : %d",a);//30
	}
	printf("\n In a function : %d",a);//100
	getch();
}
