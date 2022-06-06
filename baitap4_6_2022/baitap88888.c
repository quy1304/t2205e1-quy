#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {

	printf("/*========= Kich thuoc cua cac kieu du lieu =========*/\n");

    printf("\n       Kieu int: %d bytes\n", sizeof(int));
    printf("       So nguyen: 15\n");
    
    printf("\n       Kieu float: %d bytes\n", sizeof(float));
    printf("       So thuc kieu float: %f\n",3.456);
    
    printf("\n       Kieu double: %d bytes\n", sizeof(double));
    printf("       So thuc kieu double: %lf\n",3.4567891235);
    
    printf("\n       Kieu char: %d bytes\n", sizeof(char));
    printf("       Ki tu: %c\n", 'E');
    
    printf("\n       Kieu long int: %d bytes\n", sizeof(long int));
    
    printf("\n       Kieu long double: %d bytes\n", sizeof(long double));
    
    printf("\n/*====================================================*/\n");
    
    return 0;
}
