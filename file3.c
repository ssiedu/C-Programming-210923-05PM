#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[20];
	fp=fopen("Myfile1.txt","r");
	while(fscanf(fp,"%s",ch)!=EOF)
	{
		printf("%s",ch);
	}
	
	fclose(fp);
	
	getch();
}
