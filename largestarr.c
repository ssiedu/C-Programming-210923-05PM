#include<stdio.h>
void main()
{
	int a[10],i,n,j;
	printf("\n Enter Size of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("\n Largest Number : %d",a[0]);
	
	getch();
}
