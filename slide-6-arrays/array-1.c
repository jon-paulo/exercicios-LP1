#include <stdio.h>

const int L = 2;
const int C = 2;

void preenche (int arr[L][C], int l, int c){
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			printf("arr[%d][%d]:", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

int main(void){
	int arr[L][C];
	preenche (arr, L, C);
	for(int i = 0; i < L; i++){
		for(int j = 0; j < C; j++){
			printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);
		}
	}
}
