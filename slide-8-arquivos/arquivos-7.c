#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int  idade;
    char nome[64];
    int  peso;
}Pessoa;

void preenche(Pessoa *p){
	printf("idade: ");
	scanf("%d", &p->idade);
	printf("nome: ");
	scanf("%s", p->nome);
	printf("peso: ");
	scanf("%d", &p->peso);
}

void escreve(Pessoa *p, FILE* f){
	fwrite(p, sizeof(Pessoa), 1, f);
}
void le(Pessoa *p, FILE* f){
	fread(p, sizeof(Pessoa), 1, f);
}

int main(void) {
	int tam = 2; // soh pra poder testar com outros valores e so mudar uma variavel
	bool ler;
	Pessoa vet[tam];
	printf("0 pra escrever, 1 pra ler: ");
	scanf("%d", &ler);
	if (ler){
		FILE * f = fopen("texto-2.5D.bin", "rb");
		for (int i = 0; i < tam; i++) {
	        printf("Pessoa %d: ", i+1);
	    	le(&vet[i], f);
	    	printf("%s(%d anos, %d Kg)\n", vet[i].nome, vet[i].idade, vet[i].peso);
		}
	} else {
		FILE * f = fopen("texto-2.5D.bin", "wb");
		for (int i = 0; i < tam; i++) {
	        printf("Pessoa %d: ", i+1);
	        preenche(&vet[i]);
	    	escreve(&vet[i], f);
		}
	}
}