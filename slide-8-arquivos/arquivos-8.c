//respondendo a pergunta: no exercicio 7, o tamanho do nome colocado nao tinha nada a ver com o tamanho final do arquivo, porque sempre seria o tamanho inteiro da struct com 64 bytes de string. Mesmo que nao usassemos todos os 64 espacos

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int  idade;
    char nome[64];
    int  peso;
}Pessoa;

void preenche(Pessoa *p){
	printf("idade: ");
	scanf("%d", &p->idade);
	printf("nome: ");
	scanf("%63s", p->nome);
	printf("peso: ");
	scanf("%d", &p->peso);
}

void escreve(Pessoa *p, FILE* f){ 
	fwrite(&p->idade, sizeof(int), 1, f);
    fwrite(&p->peso, sizeof(int), 1, f);
    size_t len = strlen(p->nome);
    fwrite(&len, sizeof(size_t), 1, f);
    fwrite(p->nome, sizeof(char), len, f);
}
bool le(Pessoa *p, FILE* f){size_t len; // bool soh por protecao, erros e tals
    if (fread(&p->idade, sizeof(int), 1, f) != 1) return false;
    if (fread(&p->peso, sizeof(int), 1, f) != 1) return false;
    if (fread(&len, sizeof(size_t), 1, f) != 1) return false;
    if (len >= 64) return false; // Protecao
    if (fread(p->nome, sizeof(char), len, f) != len) return false;
    p->nome[len] = '\0';
    return true;
}

int main(void) {
	int tam = 10; // soh pra poder testar com outros valores e so mudar uma variavel
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