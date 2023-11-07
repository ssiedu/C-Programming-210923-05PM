//conditional operator
//wap to find greatest num between given three number
#include<stdio.h>
void main()
{
	int a,b,c,ans;
	printf("enter frist val: ");
	scanf("%d",&a);
	printf("enter second val : ");
	scanf("%d",&b);// a=122 b= 9 c=45
	printf("enter third val :");
	scanf("%d",&c);
	a>b?(a>c?a:c):(b>c?b:c);
	printf("greatest num = %d",ans);
   
	
}
