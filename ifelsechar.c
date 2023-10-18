#include<stdio.h>
void main()
{
	char c1,c2;
	printf("\n Enter First character : ");
	scanf("%c",&c1);//102.22
	printf("\n Enter Second character : ");
	scanf(" %c",&c2);//102.33
	
	if(c1>c2)//(30>20)
		printf("\n Largest character is : %c",c1);
	else
		printf("\n Largest character is : %c",c2);
	getch();
}
