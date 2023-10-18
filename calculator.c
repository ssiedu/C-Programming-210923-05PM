#include<stdio.h>
void main()
{
	int n1,n2,uc;
	char ch;
	while(1)
	{
	printf("\n Do u want to continue : \n1.Yes \n2.No\n ");
	scanf("%d",&uc);
	if (uc==1)
	{
	printf("\n Enter First Number : ");
	scanf("%d",&n1);
	printf("\n Enter Second NUmber : ");
	scanf("%d",&n2);
	printf("\n1.Add\n2.Sub\n3.Mul\n4.Div");
	printf("\n Please Select Any One : ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
			printf("%d + %d = %d",n1,n2,n1+n2);
			break;
		case '-':
			printf("%d - %d = %d",n1,n2,n1-n2);
			break;
		case '*':
			printf("%d * %d = %d",n1,n2,n1*n2);
			break;
		case '/':
			printf("%d / %d = %d",n1,n2,n1/n2);
			break;
		default:
			printf("\n Invalid Choice");			
	}
	}
	else
	{
		break;
	}
}	
	getch();
}
	
	
