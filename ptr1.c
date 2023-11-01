#include<stdio.h>
void main()
{
	int num=100;
	//int *ptr;
	//ptr=&num;
	int *ptr=&num;	
	printf("\n Address of number : %u",&num);
	printf("\n value of ptr : %u",ptr);
	printf("\n value of number :%d",*ptr);
	
	printf("\n Address of number : %p",&num);
	printf("\n value of ptr : %p",ptr);
	
	printf("\n Address of number : %x",&num);
	printf("\n value of ptr : %x",ptr);
	getch();
}
