#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr=&i;
	i=100;
	printf("\n valie of i : %d",i);//100
	printf("\n value of ptr : %d",*(int*)ptr);
	
	ptr=&f;
	f=12.66;
	printf("\n value of f : %.2f",f);//12.66
	printf("\n value of ptr : %.2f",*(float*)ptr);//12.66

	ptr=&c;
	c='S';
	printf("\n value of c : %c",c);//S
	printf("\n value of ptr : %c",*(char*)ptr);	
	getch();
	
}
