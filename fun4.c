//function without argument and with return type
#include<stdio.h>
int Addition();
void main()
{
	int add;
	add=Addition();
	printf("\n sum is : %d",add);//function call
	getch();
}
int Addition() // function definition
{
	int n1,n2,res;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	res=n1+n2;
	return res;
}
