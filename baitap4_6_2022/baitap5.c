#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top;
	float bottom;
	float height;
	float dt; 
	
	printf ( "top= ");
	scanf ( "%f",&top );
	
	printf ( "bottom= ");
	scanf ( "%f",&bottom );
	
	printf ( "height= ");
	scanf ( "%f",&height );
	
	dt= ((top+bottom)/2)*height;
	 
	printf ( " Dien tich hinh thang=%.4f",dt );
	 
	return 0;
}
