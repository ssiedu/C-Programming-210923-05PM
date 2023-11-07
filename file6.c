#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[40];
	fp=fopen("Myfile3.txt","w");
	fputs("Welcome to C programming Class",fp);
	fclose(fp);
	fp=fopen("Myfile3.txt","r");
	printf("%s",fgets(ch,32,fp));
	fclose(fp);	
	getch();
}
