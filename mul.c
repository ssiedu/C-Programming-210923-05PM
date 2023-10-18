#include<stdio.h>
void main()
{
	int num1,num2,num3,result;
	/*printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	printf("\n Enter Third Number : ");
	scanf("%d",&num3);*/
	
	printf("\n Enter Three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	result=num1*num2*num3;
	printf("Multiplication of three numbers : %d",result);
	getch();
}
