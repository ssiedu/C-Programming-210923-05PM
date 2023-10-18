#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);//100
	printf("\n Enter the value of y : ");
	scanf("%d",&y);//100
	
	printf("\n Greater than : %d",x>y);//0
	printf("\n Less Than	: %d",x<y);//0
	printf("\n Greater than equal to : %d",x>=y);//1
	printf("\n Less Than Equal to : %d",x<=y);//1
	printf("\n Equal to : %d",x==y);//1
	printf("\n Not Equal to : %d",x!=y);//0
	
	getch();

}
