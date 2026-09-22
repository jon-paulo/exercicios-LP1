#include <stdio.h>

int main(void){
	int N;
	int n;
	int sum;
	printf("me dá o N: \n");
	scanf("%d", &N);
	n = N;
	for (sum = 0; N > 0; N--){
		sum = sum + (N*N);
	}
	printf("somatório de %d até 1: %d \n", n, sum);
}
