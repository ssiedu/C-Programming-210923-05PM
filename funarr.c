//Array function
#include<stdio.h>
void getarray(int a[5]);//function declaration
void main()
{
	int a[5]={11,22,33,44,55};
	getarray(a);
	getch();
}
void getarray(int a[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
