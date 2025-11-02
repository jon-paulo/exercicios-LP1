#include <stdio.h>
#include <stdlib.h>

long int tamanho(const char *nome) {
	FILE *f = fopen(nome, "rb");
	
	if(!f){
		perror("Erro ao tentar abrir arquivo");
		return -1;
	}
	long int cont = 0;
	int c; // soh pra guardar o byte lido rapidinho
	
	while ( (c = fgetc(f)) != EOF) {
		cont++;
	}
	fclose(f);
	return cont;
}

int main(){
	const char *arquivo = "dados.txt";
	
	long int tam = tamanho(arquivo);
	
	if(tam != -1){
		printf("O arquivo '%s' possui %ld bytes. \n", arquivo, tam);
	} else {
		printf("Nao foi possivel calcular o tamanho de '%s' por algum motivo", arquivo);
	}
/*	tam = tamanho("arquivo_inexistente.txt"); //soh pra ver uma coisa aqui
	if (tam == -1){
		printf("Teste com arquivo inexistente, ele nao existe msm \n");
	}
*/	return 0;
}