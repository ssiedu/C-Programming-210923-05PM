#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	float sal;
}e,e1;
void main()
{
	printf("\n Enter First Employee Info : \n");
	printf("\n Enter Employee Id : ");
	scanf("%d",&e.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e.sal);
	
	printf("\n Enter Second Employee Info : \n");
	printf("\n Enter Employee Id : ");
	scanf("%d",&e1.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e1.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e1.sal);
	
	/*printf("\n Employee Detail : \n");
	printf("\n Employee Id : %d",e.id);
	printf("\n Employee Name : %s",e.name);
	printf("\n Employee Salary : %.2f",e.sal);*/
	
	printf("\n\n Employee Detail : \n");
	printf("\n Id \t Name \t Salary ");
	
	printf("\n %d",e.id);
	printf("\t %s",e.name);
	printf("\t %.2f",e.sal);
	
	printf("\n %d",e1.id);
	printf("\t %s",e1.name);
	printf("\t %.2f",e1.sal);
	getch();	
	
	
	
}
