#include<stdio.h>
void main()
{
	int i,s,n;
	printf("\n Enter Start Character : ");
	scanf(" %c",&s);
	printf("\n Enter stop Character : ");
	scanf(" %c",&n);
	i=s;
	while(i<=n)
	{
		printf("%c\t",i);
		i++;
	}
	getch();
}
