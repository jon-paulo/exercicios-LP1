#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define linha_min 22 // como tem 20 posições + 2 do estado, esse eh o minimo
#define linha_max 256 // soh pq parece bastante coisa sla

int main(){
	int escolha_linha;
	printf("numero da linha: ");
	scanf("%d", &escolha_linha);
	
/*	if (escolha_linha <= 0){ // porque eu sei que daria erro de qualquer forma
		printf("registro nao encontrado\n");
		return 1;
	}
*/
	FILE *f = fopen("dados.txt", "r");
	if (!f){
		perror("Erro ao abrir o arquivo");
		return 1;
	}
	
	char linha_buffer[linha_max];
	int linha_atual = 1;
	int encontrado = 0; // pra saber
	
	while (fgets(linha_buffer, sizeof(linha_buffer), f)){ //
		if (linha_atual == escolha_linha){
			if (strlen(linha_buffer) >= linha_min){
				char idade[4];
				char estado[3];
				
				strncpy(idade, &linha_buffer[10], 3);
				idade[3] = '\0'; // pq nem sempre strncpy faz isso
				strncpy(estado, &linha_buffer[20], 2);
				estado[2] = '\0';
				
				printf("Idade: %s\n", idade);
				printf("Estado: %s\n", estado);
				
				encontrado = 1;
			}
			break; //porque encontramos a linha, sai do loop
		}
		linha_atual++; //porque nao encontramos a linha, vai pra prox
	}
	fclose(f);
	
	if(!encontrado) printf("registro nao encontrado \n");
	return 0;
}
