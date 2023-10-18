#include<stdio.h>
void main()
{
	int n,i,s;
	printf("\n Enter Start Limit : ");
	scanf("%d",&s);
	printf("\n Enter stop limit : ");
	scanf("%d",&n);
	i=s;
	while(i>=n)
	{
		//printf("\n Hello");
		printf("\n%d",i);
		i--;
	}
	getch();
}
