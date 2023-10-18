#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter start Limit : ");
	scanf("%d",&s);
	printf("\n Enter stop Limit : ");
	scanf("%d",&n);
	printf("\n Natural Number : \n");
	for(i=s;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}
