#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("Myfile4.txt","w");
	fputs("This is a pen",fp);
	fseek(fp,8,SEEK_SET);
	fputs("C program Class",fp);
	fclose(fp);
	getch();
}
