#include<stdio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	printf("\n value of ptr : %u",ptr);
	//ptr++;
	//new_address=current_Address + i*sizeof(datatype)
	//new_address=6487572+1*4 =  6487576
	ptr--;
	printf("\n value of pointer after decrement : %u",ptr);
	//printf("\n value of pointer after increment : %u",ptr);
	getch();
}
