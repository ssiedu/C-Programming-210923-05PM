#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("Myfile2.txt","w");
	fputc('Z',fp);
	fclose(fp);
	getch();
}
