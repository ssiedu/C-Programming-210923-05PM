#include<stdio.h>
void main()
{
	int a[10],n,i,j,temp;
	printf("\n Enter Size of Array :");
	scanf("%d",&n);
	printf("\n Enter Elements Of Array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Sorted Array :\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
	
	
	
	
	
}
