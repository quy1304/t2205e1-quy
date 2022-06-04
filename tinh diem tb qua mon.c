#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int nghi;
	int tong;
	
	printf("so buoi nghi hoc\n");
	scanf("%d", &nghi);
	
	printf("tong so buoi hoc\n");
	scanf("%d", &tong);
	
	if (nghi<=tong*0.25)
	{
		int lt;
		int th;
		int bt;
		
		printf("du dieu kien\n");
		
		printf("nhap diem ly thuyet\n");
	    scanf("%d",&lt);
	    
	    printf("nhap diem thuc hanh\n");
	    scanf("%d",&th);
	    
	    printf("nhap diem bai tap\n");
	    scanf("%d",&bt);
	    
	    if (lt>=20*0.4)
	    {
	    	printf("qua mon ly thuyet\n");
		}
		else {
			printf("khong qua mon ly thuyet\n");
		}
		if (th>15*0.4)
		{
			printf("qua mon thuc hanh\n");
		}
		else {
			printf("khong qua mon thuc hanh\n");
		}
		if (bt>10*0.4)
		{ 	printf("qua mon bai tap\n");
		}
		else {
			printf("khong qua mon bai tap\n");
		}
	}
	else {
		printf("thi lai\n");
	}
	return 0;
}
	
