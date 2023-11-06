#include<stdio.h>
#include<math.h>
void main()
{
	int n,res,p;
	printf("\n Enter any number : ");
	scanf("%d",&n);
	printf("\n Enter power : ");
	scanf("%d",&p);
	res=pow(n,p);
	printf("\n power of any number : %d",res);
	getch();
}
