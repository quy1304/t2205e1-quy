#include <stdio.h>
#include <stdlib.h>

float tong(int a, float b);
int main()
{
	int sl;
	float gia; 
	printf("Nhap sl: ");
	scanf("%d",&sl);
	
	printf("Nhap gia: ");
	scanf("%f",&gia);
	
	printf("Tong tien= %2f", tong(sl,gia));
}
float tong(int a, float b){
	float c=a*b;
	return c; 
} 

