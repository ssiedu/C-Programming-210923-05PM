//fibonnacci series
#include<stdio.h>
void main()
{
	int x=0,y=1,n,i=2,z;
	printf("\n Enter Any Number : ");
	scanf("%d",&n);
	printf("\n fibbonacci series :\n");
	printf("%d\n%d",x,y);
	while(i<n)
	{
		z=x+y;
		printf("\n%d",z);
		x=y;
		y=z;
		i=i+1;
	}
	getch();
}
