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

void preenche_pos(perso *p){
	printf("(x, y): \n");
	scanf("%d %d", &p->pos.x, &p->pos.y);
}

void preenche_vet(perso vet[], int tam) {
    printf("coordenadas de 0 ate 9\n");
	for (int i = 0; i < tam; i++) {
        printf("Personagem %d: ", i);
		vet[i].id = i;
        vet[i].pontu = 0;
		preenche_pos(&vet[i]);
    }
}

int main(void) {
	int tam = 10; // so pra poder testar com outros valores e so mudar uma variavel
	perso vet[tam];
	preenche_vet(vet, tam);
    
	for (int i = 0; i < tam; i++) {
    	printf("Personagem %d: (%d,%d) \n", vet[i].id, vet[i].pos.x, vet[i].pos.y);
    	printf("pontucao: %d \n", vet[i].pontu);
	}
	
	//parte do mapa
	int lin = 10;
	int col = 10;
	char mapa[lin][col];
	for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
			mapa[i][j] = 32; //32 eh espaco em ASCII, eu so quis usar numero mesmo
        }
    }
    for (int i = 0; i < tam; i++) {
    	for (int j = 0; j < lin; j++){
			if (vet[i].pos.x == j) {
				for (int k = 0; k < col; k++){
					if (vet[i].pos.y == k) {
						mapa[j][k] = vet[i].id + 48; //isso vai virar os numeros em char
					}
				}
			}
		}
	}
	printf(" |===================| MAPA |===================|\n");
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
			printf(" [%c] ", mapa[i][j]);
		}
        printf("\n");
        printf("\n");
	}
}
