#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("Myfile2.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
