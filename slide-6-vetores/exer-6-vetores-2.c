#include <stdio.h>

void preenche (int* xs, int n){
	printf("Digite %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &*(xs+i));
	}
}

int main(void){
	int vet[5];
	preenche(vet, 5);
	for (int i = 0; i < 5; i++){
	    printf("%d ", *(vet + i));
	}
	
	int I;
	printf("remover indice: ");
	scanf("%d", &I);
	
	for (int i = 0; I + i < 5; i++){
		vet[I+i] = vet[I+i+1];
		if (I+i == 4) { //(I+i = 4) eh o ultimo loop possivel.
			vet[4] = 0; //pelo exemplo, sempre vai ser o ultimo indice que vira 0. So um item eh removido afinal.	
		}
	}
	//print vetor denovo
	for (int i = 0; i < 5; i++){
	    printf("%d ", *(vet + i));
	}
}