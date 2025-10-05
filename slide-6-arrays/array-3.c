#include <stdio.h>

const int L = 4;
const int C = 4;

#define DEBUG 0 // botar pra 1 se quiser ver o processo por dentro

void submat(int arr[L][C], int submatriz[L][C], int i, int lc){ // "i" seria a coluna que nao usaremos, ja que sempre escolhemos 0 como linha
	for(int l = 1; l < lc; l++){
		for(int c = 0; c < lc; c++){
			if (c < i){ // porque se o indice da coluna for menor que i, ela nao foi pulada
				submatriz[l-1][c] = arr[l][c];
			} else if(c > i){
				submatriz[l-1][c-1] = arr[l][c];
			}
		}
	}
}
	
float determinante (int arr[L][C], int lc){
	float det = 0;
	int sinal = 1;
	int submatriz[L][C];
	float subdet; //soh criei essa variavel pra ser mais facil e eficiente de printar e ver a execucao por dentro.
	
	if (lc == 1){
		return arr[0][0];
	}
	
	for(int i = 0; i < lc; i++){
		submat(arr, submatriz, i, lc);
		subdet = determinante(submatriz, lc-1); //soh pra ser facil e eficiente de printar
		if (DEBUG) {
			printf("matriz:\n");
			for(int l = 0; l < (lc); l++){
				for(int c = 0; c < (lc); c++){
					printf("%-4d", arr[l][c]);
				}
				printf("\n");
			}
			printf("submatriz:\n");
			for(int l = 0; l < (lc-1); l++){
				for(int c = 0; c < (lc-1); c++){
					printf("%-4d", submatriz[l][c]);
				}
				printf("\n");
			}
			printf("determinante da submatriz: %.2f\n", subdet); //foi soh pra isso que criei "subdet"
			printf("determinante da matriz: %.2f + (%d x %d x %.2f) = ", det, sinal, arr[0][i], subdet);
		}
		det += sinal * arr[0][i] * subdet;
		sinal = -sinal;
		if (DEBUG) {printf("%.2f\n", det);}
	}
	return det;
}

int main(void){
	int arr[L][C];
	int lc = L;
	for(int i = 0; i < L; i++){
		for(int j = 0; j < C; j++){
			printf("arr[%d][%d]:", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < L; i++){
		for(int j = 0; j < C; j++){
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("%.2f", determinante (arr, lc));

}
