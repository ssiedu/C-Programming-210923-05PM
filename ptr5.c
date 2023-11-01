#include<stdio.h>
void main()
{
	int a=10;
	int *ptr1=&a;
	int **ptr2= &ptr1;
	int ***ptr3=&ptr2;
	printf("\n address of a : %u",&a);
	printf("\n address of a using ptr : %u",ptr1);
	printf("\n value of a using ptr :%d",*ptr1);
	
	
	printf("\n address of ptr1 : %u",&ptr1);
	printf("\n address of ptr1 using ptr2: %u",ptr2);
	printf("\n value of number using ptr2 :%d",**ptr2);
	
	printf("\n address of ptr2 : %u",&ptr2);
	printf("\n address of ptr2 using ptr3: %u",ptr3);
	printf("\n value of number using ptr3 :%d",***ptr3);
	
	getch();
}
