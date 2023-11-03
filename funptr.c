#include<stdio.h>
int product(int n1, int n2);
void main()
{
	int res,n1=2,n2=5;
	int (*ptr)(int , int);
	ptr=&product;
	res=(*ptr)(n1,n2);
	printf("\n product of two numbers : %d",res);
	getch();
	
}
int product(int n1, int n2)
{
	/*int n1,n2;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);*/
	return n1*n2;
}


