#include <stdio.h>

void compra(int* conta, int valor) {
        *conta -= valor;
}
int main (void){
        int conta_1;
        int conta_2;
        int compras[] = {100, 50, 80, 30, 20};
	printf("conta 1: ");
        scanf("%d", &conta_1);
        printf("conta 2: ");
        scanf("%d", &conta_2);
//      printf("1 = %d\n", conta_1);
//      printf("2 = %d\n", conta_2);
	for (int i = 0; i < sizeof(compras)/sizeof(compras[0]); i++){ //usei sizeof so para ser mais geral, caso queira mudar a lista nao precisa mudar mais nada
//		printf("valor: %d\n", compras[i]);
        	if (conta_1 < conta_2){
        	        compra(&conta_2, compras[i]);
        	} else { // conta_1 tem prioridade se forem iguais.
        	        compra(&conta_1, compras[i]);
        	}
        printf("1 = %d\n", conta_1);
        printf("2 = %d\n", conta_2);
	}
}
