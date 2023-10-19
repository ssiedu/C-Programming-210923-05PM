#include<stdio.h>
void Hello();//function declaration
void Hii();
void main()
{
	int i;
	for(i=1;i<=5;i++)
		Hello();//function call

	
	getch();
}

void Hello()
{
	printf("\n Hello Everyone!");
	printf("\n This is Hello Function");
	Hii();
}
void Hii()
{
	printf("\n Hii");
	printf("\n Welcome to ssi");
}
