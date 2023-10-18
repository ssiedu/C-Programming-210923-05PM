#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	printf("\n Enter third Number : ");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3)
		printf("\n N1 is largest Number");
	else if(n2>n3)
		printf("\n N2 is largest Number");
	else
		printf("\n N3 is largest Number");
	getch();
	
	
	
	
	
}
