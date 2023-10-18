#include<stdio.h>
void main()
{
	int i,j;
	for(i=65;i<=69;i++)//row 1 2 3 4 5 
	{
		for(j=65;j<=i;j++)// 1 2 3 4 5
		{
			printf(" %c",i);
		}
		printf("\n");
	}
	getch();
}
