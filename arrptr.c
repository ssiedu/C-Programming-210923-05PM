#include<stdio.h>
void main()
{
	int i,n;
	int arr[10];
	int *ptr=NULL;
	ptr=arr;
	printf("\n Enter array size :");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\na[%d] = ",i+1);
		scanf("%d",(ptr+i));
	}
	printf("\n Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));//arr[i]
	}
	getch();
}
