//size of union in c language
#include<stdio.h>
union emp
{
 int id;
 char name [20];
 float sal;	
}e1,e2;// globaly declaire
void main()
{
	printf("enter first emp information : \n");
	printf("id of emp : ");
	scanf("%d",&e1.id);
	printf("Id of employ : %d\n",e1.id);
	printf("enter name of emp :");
	scanf("%s",e1.name);
	printf("name of employ : %s\n",e1.name);
	printf("enter sallary : ");
	scanf("%f",&e1.sal);
	printf("sallary of employ : %.2f\n",e1.sal);
	
	
} 
