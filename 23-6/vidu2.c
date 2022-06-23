#include <stdio.h>
#include <stdlib.h>

float tong1(int a, float b);
//float tong2(int a, float b);
int main(){
	int sl;
	float gia, tong2=0;
	char ch;
	
	do{
		printf("\nNhap sl: ");
		scanf("%d",&sl);
		printf("Nhap gia: ");
		scanf("%f",&gia);
		printf("thanh tien= %2f", tong1(sl, gia));
		tong2+=tong1(sl,gia);
		printf("Ban co muon tiep tuc khong?");
		fflush(stdin);
		ch=getch();
	
	} while (ch=='y');
	
	printf("\ntong tien= %2f", tong2);
} 
float tong1(int a, float b){
	float c=a*b;
	return c;
}
