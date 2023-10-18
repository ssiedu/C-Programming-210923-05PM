#include<stdio.h>
void main()
{
	int a=10,b=5;
	b+=a;
	printf("\n value of a : %d",a);//10
	printf("\n value of b : %d",b);//15
	
	a-=b;//a=a-b
	printf("\n value of a : %d",a);//-5
	printf("\n value of b : %d",b);//15
	
	b/=a;
	printf("\n value of a : %d",a);//-5
	printf("\n value of b : %d",b);//-3
	
	a*=b;
	printf("\n value of a : %d",a);//15
	printf("\n value of b : %d",b);//-3
	
	a%=b;
	printf("\n value of a : %d",a);//0
	printf("\n value of b : %d",b);//-3
	getch();
}
