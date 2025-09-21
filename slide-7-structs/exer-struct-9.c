#include <stdio.h>

typedef struct{
	int x;
	int y;
} posicao;

typedef struct{
	int id;
	int pontu; //pontuacao
	posicao pos;
} perso;

int main(void) {
	int tam = 10; // so pra poder testar com outros valores e so mudar uma variavel
	perso vet[tam];
}