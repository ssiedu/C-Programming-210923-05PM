#include<stdio.h>
void main()
{
	int n1,n2;
	printf("\n Enter First number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	if(n1==n2)
		printf("\n both are Equal");
	else if(n1>n2)
		printf("\n N1 is largest");
	else
		printf("\n N2 is largest");
	getch();
}
