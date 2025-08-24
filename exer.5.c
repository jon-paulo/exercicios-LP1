#include <stdio.h>

int main(void){
	float n;
	float soma;
	n = 1;
	while (n != 0){
		printf("some números, pare com 0:  \n");
		scanf("%f", &n);
		soma = soma + n;
	}
	printf("soma: %f", soma);
}
