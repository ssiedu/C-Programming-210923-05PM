#include<stdio.h>
void main()
{
	FILE *fp;
	int num=100;
	int res;
	fp=fopen("Myfile5.txt","w");
	putw(num,fp);
	fclose(fp);
	fp=fopen("Myfile5.txt","r");
	res=getw(fp);
	printf("%d",res);
	fclose(fp);
	getch();
}
