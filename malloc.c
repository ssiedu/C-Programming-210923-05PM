#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n,i,sum=0;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Sorry! Not sufficient Memory");
		exit(0);
	}
	printf("\n Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+ *(ptr+i);
	}
	printf("\n Sum of array Elements : %d",sum);
	free(ptr);
	getch();
}
