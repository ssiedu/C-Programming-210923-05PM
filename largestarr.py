#include<stdio.h>
void main()
{
	int a[10],i,n;
	printf("\n Enter Size of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+i])
		{
			a[i]=a[i+i];
		}
	}
	printf("\n Largest Number : %d",a[i]);
	
	getch();
}
