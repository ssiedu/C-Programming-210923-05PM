#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Addition : %d",a+b);//13
	printf("\n Subtraction : %d",a-b);//9
	printf("\n Multiplication : %d",a*b);//22
	printf("\n Division : %.2f",(float)a/b);//5
	printf("\n Modulus : %d",a%b);//1
	getch();
}
