#include<stdio.h>
void main()
{
	int num1,num2,add;
	int *ptr1,*ptr2;
	ptr1=&num1;
	ptr2=&num2;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);

	add=*ptr1 + *ptr2;
	printf("\n Addition is : %d",add);
	getch();
	
}
