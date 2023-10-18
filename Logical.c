#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);//5
	printf("\n Enter the value of y : ");
	scanf("%d",&y);//10
	
	printf("\n And : %d",(x>y && x==y));//0
	printf("\n OR  : %d",(x<y || x!=y));//1
	printf("\n Not : %d",!(x==y));//1
	printf("\n AND Not : %d",!(x>y && x>=y));//1
	printf("\n OR Not : %d",!(x==y || x!=y));//0
	printf("\n And OR Not :%d",!((x>y && x<y)|| !(x)));//1
	getch();
}

