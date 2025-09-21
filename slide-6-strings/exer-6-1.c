#include  <stdio.h>

int tamanho(char* str){
	int cont = 0;	
	for(int i = 0; str[i]; i++){
		cont++;
	}
	return cont;
}
	
int main(void){
	char frase[50];
	scanf("%s", frase);
	printf("tamanho: %d\n", tamanho(frase));


}
