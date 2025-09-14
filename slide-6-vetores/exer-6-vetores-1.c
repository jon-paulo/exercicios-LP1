#include <stdio.h>

void preenche (int* xs, int n){
	printf("Digite %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &*(xs+i));
	}
}

float media(int* xs, int n){
    float soma = 0;
    for (int i = 0; i < n; i++){
        soma += *(xs+i);
    }
    soma = soma/n;
    return soma;
}


int main(void){
	int quantidade = 10; //essa variavel so existe pra nao ter que mudar o valor em mais de um lugar.
	int vec[quantidade];
	preenche(vec, quantidade);
	float med = media(vec, quantidade);
	//voce nao pediu para printar, mas se quiser ta aqui:
	
	for (int i = 0; i < quantidade; i++){
	    printf("%d ", *(vec + i));
	}
    printf("media: %.2f \n", med);

}
