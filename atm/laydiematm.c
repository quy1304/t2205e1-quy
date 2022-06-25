#include <stdio.h>
#include <stdlib.h>

#define ID "abc"
#define PASS 123

int login(char user[10], int pass);
void menu();
int ch(char c);
int rt(int *tong);
int ck(int id,int *tong);
void sd(int tong);

int main (void){
	int tong = 1000000000, a;
    char user[10];
    char c;
    int pass, i = 0, j = 1;
    do {
        printf ("\nNhap id: ");
        fflush(stdin);
        gets (user);
        printf ("Nhap pass: ");
        scanf ("%d", &pass);
        if (login(user, pass) == 1)
        	break;
        else {
        	i++;
        	if (i == 3){
        		printf ("\nBan da nhap sai tai khoan hoac mat khau qua 3 lan!\nTHE BI KHOA!");
        		j = 0;
    			exit(0);
			}
			else {
				printf ("Ban da nhap sai tai khoan hoac mat khau!\nMoi ban nhap lai!\n");
			}		
		}
    } while (1);
    
    if (j == 0) exit (0);
	do {
		int chon;
		menu();
		scanf("%d", &chon);
		switch (chon){
		case 1: rt(&tong); break;
		case 2: {
			printf ("Nhap STK nguoi nhan: ");
			scanf ("%d", &a);
			ck(a, &tong);break;
		}
		case 3: sd(tong);break;
		case 4:{
			printf ("Hen gap lai quy khach!"); 
			exit(0);
		} 
		default: printf ("Ban da nhap sai! Chon lai tu 1 den 4!\n");
		}
		printf ("Ban co muon tiep tuc khong?\nNhap y de tiep tuc ");
		fflush(stdin);
		c = getchar ();
	} while (ch(c) == 1);
}

int login(char name[10], int pass){
    if (strcmp(name, ID) == 0 && pass == PASS)
        return 1;
    else return 0;
}

void menu(){
	printf ("Moi ban chon chuc nang:  \n");
	printf ("1. Rut tien              \n");
	printf ("2. Chuyen khoan          \n");
	printf ("3. Hien thi so du        \n");
	printf ("4. Thoat chuong trinh    \n");
}

int rt(int *tong){
	int num;
	do {
		printf ("Nhap so tien can rut: ");
		scanf ("%d", &num);
		if (num % 50000 == 0 && num < 30000000 && num >= 50){
		printf ("Ban da rut %dvnd", num);
		*tong -= num;
		printf ("\nSo tien con lai trong tai khoan la: %dvnd\n",*tong);
	    break;  
		}
		else
			printf ("So tien phai la boi cua 50.000 va nho hon 3.000.000\n");
	} while (1);
}

int ck(int id,int *tong){
	int num;
	printf ("Nhap vao so tien can chuyen: ");
	scanf ("%d", &num);
	*tong -= num;
	printf ("Ban da chuyen %dvnd den STK %d\n", num, id);
	printf ("So tien con lai trong tai khoan la %dvnd\n", *tong);	
}

void sd(int tong){
	printf ("So du hien tai la: %d\n", tong);	
}

int ch(char c){
	if (c == 'y') return 1;
	else return 0;
}
