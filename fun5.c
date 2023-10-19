//function with argument and without return type
#include<stdio.h>
void Addition(int x,int y);//formal argument
void main()
{
	int n1,n2;//actual argument
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	Addition(n1,n2);//function call
	getch();
}
void Addition(int x,int y) // function definition
{	
	printf("\n sum is : %d",x+y);
}
