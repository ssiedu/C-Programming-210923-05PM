#include<stdio.h>
void main()
{
	int i,j,r,c,k;
	int a[3][3],b[3][3],mul[3][3];
	printf("\n Enter Row Size : ");
	scanf("%d",&r);
	printf("\n Enter Column Size : ");
	scanf("%d",&c);
	printf("\n Enter First Elements of matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter Second Elements of matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
			
		}
	}	
	printf("\n Matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n\n");	
	}	
	getch();
}
