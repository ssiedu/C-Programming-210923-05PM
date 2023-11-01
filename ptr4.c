#include<stdio.h>
void main()
{
	int i,n;
	int *p=&n;
	int *s=&i;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	for(*s=1;*s<=*p;*s=*s+1)
	{
		printf("\t%d",*s);
	}
	getch();
}
