#include<stdio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	printf("\n value of ptr : %u",ptr);
	ptr=ptr-3;
	printf("\n value of pointer after subtract : %u",ptr);
	getch();
}
