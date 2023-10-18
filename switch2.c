#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter Any Character : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':	
		case 'i':	
		case 'o':
		case 'u':
		case 'A':
		case 'E':	
		case 'I':	
		case 'O':
		case 'U':
			printf("\n Vowel");
			break;
			
		default:
			printf("\n Consonant");
			break;
			
	}
	getch();
}









