#include<stdio.h>
void main()
{
	int a=10,b=20;
	int *ptr=&a;
	int *ptr1=&b;
	printf("\n value of ptr : %u",ptr);
		printf("\n value of ptr1 : %u",ptr1);
	ptr=ptr-ptr1;
	printf("\n value of pointer after subtract : %u",ptr);
	getch();
}
