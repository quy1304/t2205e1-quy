#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	char ch;
	printf ("\nEnter a lower cased alphabet (a-z)\n");
	scanf("%c",&ch);
	
	if (ch<'a' || ch>'z')
		printf ("\nCharaceter not a lower cased alphabet");
	else
		switch (ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("\nCharacter is a vowel");
				break;
			case 'z':
				printf ("\nLast Alphabet (z) was entered");
				break;
			default:
				printf ("\nCharacter is consonant");
				break;
		}
	
}

