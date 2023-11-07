#include<stdio.h>
#include<string.h>
union Employee
{
	int id;
	float sal;
	char name[10];
	
}emp;
void main()
{
	emp.id=101;
	printf("\n Employee Id : %d",emp.id);
	emp.sal=78000;
	printf("\n Employee Salary : %.2f",emp.sal);
	strcpy(emp.name,"Shyam");	
	printf("\n Employee Name : %s",emp.name);
	
	getch();


}


