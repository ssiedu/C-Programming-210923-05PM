#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("2darr1.c","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
