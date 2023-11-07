#include<stdio.h>
#include<string.h>
typedef struct Employee
{
	int id;
	char name[20];
	float sal;
}Emp;
void main()
{
	Emp emp;
	emp.id=101;
	strcpy(emp.name,"Ram");
	emp.sal=56000;
	
	printf("\n Employee Id : %d",emp.id);
	printf("\n Employee Name :%s",emp.name);
	printf("\n Employee salary : %.2f",emp.sal);
	
	getch();
}
