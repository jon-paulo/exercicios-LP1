#include <stdio.h>

typedef struct {
	char nome[16];
	float altura; // m
	float peso; // Kg
} Atleta;

void exibicion(Atleta *A){
	printf(" /=========||=========\\ \n");
	printf("  Nome: %s \n", A->nome);
	printf("|======================| \n");
	printf("  Altura(m): %.2f \n", A->altura);
	printf("|======================| \n");
	printf("  Peso(Kg): %.2f \n", A->peso);
	printf(" \\=========||=========/ \n");
	printf("\n");
}
	
	
	
int main (void) {
	Atleta bautista = {"Dave Bautista", 200, 10};
	Atleta rock = {"Dwayne", 0.1, 130};
	Atleta cena = {"Johnny", 1.9999, 127.1};
	exibicion(&bautista);
	exibicion(&rock);
	exibicion(&cena);
}