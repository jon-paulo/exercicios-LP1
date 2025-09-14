#include <stdio.h>

void compra(int* conta, int valor) {
	*conta -= valor;
}
int main (void){
	int conta_1;
	int conta_2;
	printf("conta 1: ");
        scanf("%d", &conta_1);
        printf("conta 2: ");
        scanf("%d", &conta_2);
//	printf("1 = %d\n", conta_1);
//	printf("2 = %d\n", conta_2);
	if (conta_1 < conta_2){
		compra(&conta_2, 500);
	} else { // conta_1 tem prioridade se forem iguais.
		compra(&conta_1, 500);
	}
	printf("1 = %d\n", conta_1);
	printf("2 = %d\n", conta_2);

}
