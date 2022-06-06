#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float bankinh;
	float canhhinhvuong;
	float chieudai;
	float chieurong;
	float cvht;
	float dtht;
	float cvhv;
	float dthv;
	float cvhcn;
	float dthcn;
	
	printf ( "Nhap ban kinh           = ");
	scanf ( "%f", &bankinh);
	
	printf ( "Nhap canh hinh vuong    = ");
	scanf ( "%f", &canhhinhvuong);
	
	printf ( "Nhap chieu dai hcn      = ");
	scanf ( "%f", &chieudai);
	
	printf ( "Nhap chieu rong hcn     = ");
	scanf ( "%f", &chieurong);
	
	cvht = 2*bankinh*3.14;
	dtht = bankinh*bankinh*3.14;
	cvhv = canhhinhvuong*4;
	dthv = canhhinhvuong*canhhinhvuong;
	cvhcn = (chieudai+chieurong)*2;
	dthcn = chieudai*chieurong;
	
	printf ( "Chu vi hinh tron        = %f\n",cvht);
	printf ( "Dien tich hinh tron     = %f\n",dtht);
	printf ( "Chu vi hinh vuong       = %f\n",cvhv);
	printf ( "Dien tich hinh vuong    = %f\n",dthv);
	printf ( "Chu vi hinh chu nhat    = %f\n",cvhcn);
	printf ( "Dien tich hinh chu nhat = %f\n",dthcn);
	
	return 0;
}
