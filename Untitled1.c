// Wap to take one matrix from user and print left digonal alternet way
#include<stdio.h>
void main()
{
	int r,c;
	printf("enter row for matrix : ");
	scanf("%d",&r);
	printf("ENETER colums for matrix : ");
	scanf("%d",&c);
	int mat1[r][c],i,j,sum=0;
	float avrage;
	printf("enter matrix1 element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter element pos mat1[%d][%d] :",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("\nmat1 element are : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d ",mat1[i][j]);	
		}
		printf("\n");
	}
	// matrix left digonal
	printf("mat left digonal : ");
	for(i=0;i<r;i++)
	{
		
		  	printf("%d ",mat1[i][2-i]);
		  	sum=sum+mat1[i][2-
			  i];
	
	
	}
	printf("\ndigonal sum : %d",sum);
	
}


