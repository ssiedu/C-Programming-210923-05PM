#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Any Number :");
	scanf("%d",&num);
	
	(num>0) ? printf("\n Positive Number") :
		printf("\n Negative Number");
	getch();
}
