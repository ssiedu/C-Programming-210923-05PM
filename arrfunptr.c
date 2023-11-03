//array of function pointer
#include<stdio.h>
int Add(int n1,int n2);
int Sub(int n1,int n2);
int Mul(int n1,int n2);
int Div(int n1,int n2);
void main()
{
	int res,a,b;
	int (*fp[4])(int,int);
	printf("\n Enter First Number : ");
	scanf("%d",&a);
	printf("\n Enter Second Number : ");
	scanf("%d",&b);
	
	fp[0]=&Add;
	fp[1]=&Sub;
	fp[2]=&Mul;
	fp[3]=&Div;
	
	res= (*fp[0])(a,b);
	printf("\n Sum is : %d",res);
	
	res=(*fp[1])(a,b);
	printf("\n Sub is : %d",res);
	
	res=(*fp[2])(a,b);
	printf("\n Mul is : %d",res);
	
	res=(*fp[3])(a,b);
	printf("\n Div is : %d",res);
	
	getch();
}

int Add(int n1, int n2)
{
	return n1+n2;
}
int Sub(int n1, int n2)
{
	return n1-n2;
}

int Mul(int n1, int n2)
{
	return n1*n2;
}

int Div(int n1, int n2)
{
	return n1/n2;
}













