#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	float sal;
}emp,emp1;
void main()
{
	//struct Employee emp,emp1;
	emp.id=101;
	strcpy(emp.name,"Ram");
	emp.sal=56000;
	
	emp1.id=102;
	strcpy(emp1.name,"Shyam");
	emp1.sal=66000;
	
	printf("\n Employee Id : %d",emp.id);
	printf("\n Employee Name :%s",emp.name);
	printf("\n Employee salary : %.2f",emp.sal);
	
	printf("\n Employee Id : %d",emp1.id);
	printf("\n Employee Name :%s",emp1.name);
	printf("\n Employee salary : %.2f",emp1.sal);
	getch();
}
