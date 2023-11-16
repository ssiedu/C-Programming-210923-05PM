//  wap to print smallest value of given two numbers
// wap to check given two numbers are equal or not condition(a==b)
//wap to check given number is positive or negetive condition(a>0)
//WAp to check given char is vovel or consonant condition(ch=='a' || ch=='e' ||ch=='i')
//wap to check given nhumber is even or odd condition(num%2==0)
//wap 
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("value of a : %d\n",a);
	printf("value of b : %d\n",b);
	if(a>b)
	{
		printf("greatest number : %d",a);
	}
	else
	{
		printf("greatest number : %d",b);
	}
}
