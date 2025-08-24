#include <stdio.h>
#include <stdlib.h>

int main(void){
	float n;
	printf("preço em dolar: \n");
	scanf("%f", &n);
    n = n * 3.17;
	if (n < 1000){
        printf("preço em reais: %f \n", n);
		printf("BOM NEGOCIO \n");
    }
    else {
        printf("preço em reais: %f \n", n);
        printf("MAL NEGOCIO \n");
	}
	 }
