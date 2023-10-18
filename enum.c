#include<stdio.h>
enum week{sun,mon,tue,wed,thur,fri,sat};
void main()
{
	enum week t;
	t=mon;
	printf("Day = %d",t);
	getch();
}
