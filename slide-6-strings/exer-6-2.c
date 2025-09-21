#include  <stdio.h>

int tamanho(char* str){
        int cont = 0;
        for(int i = 0; str[i]; i++){
                cont++;
        }
        return cont;
}

void concatena(char* d, char* o1, char* o2){ 
	for (int i = 0; i < (tamanho(o1) + tamanho(o2)); i++){
		if (i < tamanho(o1)){
			d[i] = o1[i];
		} else {
			d[i] = o2[i - tamanho(o1)];
		}
	}
}

int main(void){
	int tam;
	printf("tamanho maximo da string:");
	scanf("%d", &tam);
    char frase[(tam*2)]; //destino
	char frase1[tam];
	char frase2[tam];
	scanf("%s", frase1);
	scanf("%s", frase2);
	concatena(frase, frase1, frase2);
    printf("concas: %s\n", frase);
}

