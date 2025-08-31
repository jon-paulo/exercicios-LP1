#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char temps[50];
	float media = 0; // pensei em usar int pra media, mas em caso da media ser negativa e decimal, o int seria um arredondamento para cima, e isso pode afetar as operacoes
	char acima = 0;
	char a;
	for (char i = 0; i < 50; i++) {
		scanf("%hhd", &a);
		temps[i] = a;
		printf("%hhd localizacao: %hhd\n", i+1, temps[i]); //so pra ver
		media = media + temps[i];
	//	printf("soma: %f\n", media); //so pra ver tambem
	}
	media = media/50;
//	printf("media: %f\n", media);
	for (char i = 0; i < 50; i++) {
	//	printf("%hhd localizacao: %hhd\n", i, temps[i]);
		if (temps[i] > media){
		acima = acima + 1;
	//	printf("%hhd localizacao: %hhd\n", i, temps[i]);
		}
	}
	printf("tem %hhd temperaturas acima da media\n", acima);
}