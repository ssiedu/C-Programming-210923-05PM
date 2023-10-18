#include<stdio.h>
void main()
{
	int n1,n2;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);
	
	if(n1!=n2)
	{
		if(n1>n2)
			printf("\n %d is largest Number ",n1);
		else
			printf("\n %d is largest Number ",n2);
	}
	else
		printf("\n Both Are Equal");
	getch();
}
