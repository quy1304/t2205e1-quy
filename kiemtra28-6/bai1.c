#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isEvenNumber(int number);
int main()
{

	int n, m, i; 
	
	printf ("Please, enter a number:\n");
	printf ("+ n: ");
	scanf ("%d",&n);
	printf ("+ m: ");
	scanf ("%d",&m);
	
	printf ("The even numbers between %d and %d:\n",n, m);
	for(i=n; i<m; i++)
	{
		if (isEvenNumber(i)==1) 
		printf("%d\n",i);
	}
	
	return 0;
}
	
int isEvenNumber(int number)
{
	if (number%2==0){
		return 1; 
	}
	else return 0;
 } 
