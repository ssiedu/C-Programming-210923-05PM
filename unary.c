#include<stdio.h>
void main()
{
	int x=2,y;
	
	//y=x++;
	
	//y=x--;
	
	//y= ++x + ++x;
	
	y=x++  + x++;
	// x=2 3 4
	 // y= 2 + 3 = 5
	
	
	
	
	printf("\n value of x : %d",x);//1
	printf("\n value of y : %d",y);//2
	getch();
}
