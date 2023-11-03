#include<stdio.h>
void main()
{
	char s[11]="ssidigital";
	int count=0;
	int i=0;
	
	while(s[i]!='\0')
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("\n Total Numbers of vowel in string : %d",count);
	getch();
}
