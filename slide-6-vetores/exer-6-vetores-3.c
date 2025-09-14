#include <stdio.h>
int L = 4; //constantes
int C = 4; //constantes
void preenche (int arr[L][C], int l, int c){
	int n;
	for (int lin = 0; lin < l; lin++){
		for (int col = 0; col < c; col++){
			printf("linha %d, coluna %d: ", lin, col);
			scanf("%d", &n);
			arr[lin][col] = n;
		}
	}
}

float media (int arr[L][C], int l, int c){
	float media = 0;
	for (int lin = 0; lin < l; lin++){
		for (int col = 0; col < c; col++){
			media += arr[lin][col];
		}
	}
	media = media/(l*c);
	return media;	
}
//pra testar
int main(void){
	int l = 4;
	int c = 4;
	int matriz[L][C];
	preenche(matriz, l, c);
	for(int i = 0; i < l; i++){
		printf("\n");
		for(int j = 0; j < c; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	printf("media: %.2f \n", media(matriz, l, c));
}