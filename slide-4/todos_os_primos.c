#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool eh_primo(int p){
	bool eh = true;
	double base = sqrt(p);
	for (int i = floor(base); i > 1; i--){
		int resto = p % i;
//		printf("divisor: %d \n", i);
//		printf("resto: %d \n", resto);
		if (resto == 0){
			eh = false;
			break;
		}
	}
	return eh;
}

void todos_os_primos(int max){
	for (int i = 2; i < max; i++){ //se o max for 2, ele nao faz nada, ele so exibe primos entre 1 e max.
	    if (eh_primo(i) == true){
			printf("%d ", i);
		}
	}
}

int main(void){
	int num;
	printf("numero maximo: ");
	scanf("%d", &num);
	printf("primos entre 1 e %d: \n", num);
	todos_os_primos(num);
}