#include<stdio.h>
void main()
{
	int i,j,r,c;
	int a[3][3];
	printf("\n Enter Row Size : ");
	scanf("%d",&r);
	printf("\n Enter Column Size : ");
	scanf("%d",&c);
	printf("\n Enter Elements of matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");	
	}	
	getch();
}
