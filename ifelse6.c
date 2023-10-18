#include<stdio.h>
void main()
{
	float num;
	printf("\n Enter Any Number : ");
	scanf("%f",&num);
	if(num>=100 && num<=200)
		printf("\n Number is in range");
	else
		printf("\n number is out of range");
		getch();
}
