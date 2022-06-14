#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	
	int pin;
	int cardid;
	int i;
	 
	printf ( "Nhap so pin: ");
	scanf ("%d",&pin);
	
	printf ( "Nhap cardid: ");
	scanf ("%d",&cardid);
	
	if (pin==123 && cardid==456)
	{
		printf ( "Moi ban chon chuc nang:\n");
		printf ( "1: Rut tien\n2: Chuyen khoan\n3: Xem so du\n4: Thoat\n");
		scanf ("%d",&i);
		switch (i)
		{
		case 1:
			printf ( "Nhap so tien can rut: ");
			break;
		
		case 2:
			printf ( "Nhap so tien can chuyen: ");
			break;
			
	    case 3:
			printf ( "So du cua ban la: ");
			break;
		
	    case 4:
			printf ( "Cam on quy khach.");
			break;
	
		default:
			break;
		}
	
	}
	else  printf ( "Mat khau khong dung.");
	
	return 0;
}
