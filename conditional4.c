#include<stdio.h>
void main()
{
	int n1,n2,n3,res;
	printf("\n Enter First Number : ");
	scanf("%d",&n1);//5
	printf("\n Enter Second Number : ");
	scanf("%d",&n2);//3
	printf("\n Enter third Number : ");
	scanf("%d",&n3);//7
	
	//res= (n1>n2 && n1>n3) ? n1 : (n2>n3) ? n2 : n3;
	
	res= (n1>n2) ?(n1>n3) ? n1 : n3 :(n2>n3)? n2 :n3;
	
	
	printf("\n Largest number : %d",res);
	getch();
}
