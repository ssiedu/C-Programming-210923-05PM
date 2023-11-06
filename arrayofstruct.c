#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	float sal;
}e[10];
void main()
{
	int i,n;
	printf("\n Enter number of Employee :");
	scanf("%d",&n);
	printf("\n Enter Employee Info : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Employee %d : ",i+1);
		printf("\n Enter Employee Id : ");
		scanf("%d",&e[i].id);
		printf("\n Enter Employee Name : ");
		scanf("%s",&e[i].name);
		printf("\n Enter Employee Salary : ");
		scanf("%f",&e[i].sal);
	}
	
	
	
	printf("\n\n Employee Detail : \n");
	printf("\n Id \t Name \t Salary ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",e[i].id);
		printf("\t %s",e[i].name);
		printf("\t %.2f",e[i].sal);
	}
	
	
	getch();	
	
	
	
}
