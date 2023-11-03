#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n1,n2,i;
	printf("\n Enter size of array : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("\n Address of previous Elements :\n");
	for(i=0;i<n1;i++)
	{
		printf("\n %u",(ptr+i));
	}
	printf("\n Enter new size of array :");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2*sizeof(int));
	printf("\n New Memory Allocation : \n");
	for(i=0;i<n2;i++)
	{
		printf("\n%u",(ptr+i));
	}
	free(ptr);	
	getch();
}
