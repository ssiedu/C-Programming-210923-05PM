#include<stdio.h>
void Hello();//function declaration
void main()
{
	Hello();//function call
	
	printf("\n Bye");
	Hello();
	getch();
}

void Hello()
{
	printf("\n Hello Everyone");
	printf("\n Welcome to ssi");
}
