#include<stdio.h>
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n %d + %d = %d",x,y,x+y);
	printf("\n %d - %d = %d",x,y,x-y);
	printf("\n %d * %d = %d",x,y,x*y);
	printf("\n %d / %d = %d",x,y,x/y);
	printf("\n (%d) % (%d) = %d",x,y,x%y);
	getch();
}
