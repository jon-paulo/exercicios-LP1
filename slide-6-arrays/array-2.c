#include <stdio.h>

const int L = 2;
const int C = 2;

float media (int arr[L][C], int l, int c){
	float soma = 0;
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			soma += arr[i][j];
		}
	}
	return (soma/(l*c));
}

int main(void){
	int arr[L][C];
	int l = L; //soh pra manter o exemplo escrito no exercicio
	int c = C;
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			printf("arr[%d][%d]:", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < L; i++){
		for(int j = 0; j < C; j++){
			printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
		}
	}
	printf("media: %.2f\n", media(arr, l, c));
}