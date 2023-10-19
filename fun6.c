//function with argument and with return type
#include<stdio.h>
int Addition(int x,int y);//formal argument
void main()
{
	int n1,n2;//actual argument
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	//Addition(n1,n2);//function call
	printf("\n sum is : %d",Addition(n1,n2));
	getch();
}
int Addition(int x,int y) // function definition
{	
	return x+y;
}
