#include<stdio.h>
void main()
{
	float n1,n2;
	printf("\n Enter First number : ");
	scanf("%f",&n1);//102.22
	printf("\n Enter Second Number : ");
	scanf("%f",&n2);//102.33
	
	if(n1>n2)//(30>20)
		printf("\n Largest Number is : %.1f",n1);
	else
		printf("\n Largest Number is : %.1f",n2);
	getch();
}
