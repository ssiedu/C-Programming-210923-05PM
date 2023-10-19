//function without argument and without return type
#include<stdio.h>
void Addition();
void main()
{
	int i,n;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		Addition();//function call
	getch();
}
void Addition() // function definition
{
	int n1,n2;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	printf("\n sum is : %d",n1+n2);
}
