#include<stdio.h>
void main()
{
	int a[2][2];
	a[1][1]=10;
	a[1][2]=20;
	a[2][1]=30;
	a[2][2]=40;
	
	
	printf("\n %d",a[1][1]);
	printf("\t %d",a[1][2]);
	printf("\n %d",a[2][1]);
	printf("\t %d",a[2][2]);
	getch();
}
