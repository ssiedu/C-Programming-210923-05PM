#include<stdio.h>
void main()
{
	int a[10],i,n;
	printf("\n Hoe many elements do u want to enter in array ?: ");
	scanf("%d",&n);
    printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] =",i);
		scanf("%d",&a[i]);
	}
	printf("\n Array is : \n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	getch();
	
}
