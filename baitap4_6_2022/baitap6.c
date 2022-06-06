#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan;
	float ly;
	float hoa;
	float tong;
	float tb; 
	
	printf ( "Nhap diem toan  = ");
	scanf ("%f",&toan);
	
	printf ( "Nhap diem ly    = ");
	scanf ("%f",&ly);
	
	printf ( "Nhap diem hoa   = ");
	scanf ("%f",&hoa);
	
	tong= toan+ly+hoa;
	tb= tong/3;
	
	printf ("Tong diem       = %.2f\n", tong );
	printf ("Diem trung binh = %.2f\n",tb);
	 
	return 0;
}
