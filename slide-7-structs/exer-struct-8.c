#include <stdio.h>

typedef struct {
	int x;
	int y;
} pto; //ponto

void preenche_pto(pto *p){
	printf("(x, y): \n");
	scanf("%d %d", &p->x, &p->y);
}

void preenche_vet(pto vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Ponto %d: ", i);
        preenche_pto(&vet[i]);
    }
}

pto* dist(pto vet[], int tam){
	double d; //distancia
	double mai_d = 0; // maior distancia
	int j = 0; // so pra guardar o ponto
	for (int i = 0; i < tam; i++) {
		d = (vet[i].x * vet[i].x) + (vet[i].y * vet[i].y); // eu ia usar sqrt mas lembrei que se d1 > d2, então tbm vale pra raiz
			if (d > mai_d){
			mai_d = d;
			j = i;
		}
	}
	return &vet[j]; //se tiver dois pontos com mesma distancia, ele vai so mandar o primeiro
}

int main(void) {
	int tam = 10; // so pra poder testar com outros valores e so mudar uma variavel
	pto vet[tam];
	preenche_vet(vet, tam);
    for (int i = 0; i < tam; i++) {
    	printf("Ponto %d: (%d,%d) \n", i + 1, vet[i].x, vet[i].y);
	}
	pto* maior_pto = dist(vet, tam);
	printf("Ponto mais distante de (0,0): (%d,%d) \n", maior_pto->x, maior_pto->y);
	}