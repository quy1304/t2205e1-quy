#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	printf ("Cac so chan tu 100 ve 0 la:\n ");
	
	for (i=100; i>=0; i-=2)
	printf("%d\n",i);
	return 0;
}
