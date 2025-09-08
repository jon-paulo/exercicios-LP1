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


int main(void) {
	int prim;
	printf("eh primo? : \n");
	scanf("%d", &prim);
	printf("%d\n", eh_primo(prim));
}
