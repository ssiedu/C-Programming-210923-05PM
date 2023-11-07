//Union 
#include<stdio.h>
union Data
{
	int i;
	float f;
	char c[20];
}d;
void main()
{
	printf("\n Size of union : %d",sizeof(d));
	getch();
}

