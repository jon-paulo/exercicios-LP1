#include <stdio.h>
#include <string.h>

void escreva_string (FILE* f, char* str) {
	for(int i = 0; str[i] ; i++){ // "str[i]" achei mais elegante do que "str[i] != '\0'" ou "i < strlen(str)".
		fputc(str[i], f);
	}
}

int main(){
	char str[26];
	char str_2D[10][26];
	FILE * f = fopen("texto-2.5D.txt", "wb");
	if (f == NULL) {
        printf("Erro\n");
        return 1; // soh pra fechar o main logo
    }
    printf("string solitaria: ", str);
    scanf("%25s", str);
    escreva_string(f, str);
    fputs("\n\n  2D: \n", f); // soh pra ficar legal em um arquivo
	for(int i = 0; i < 10; i++){
		printf("linha %d:", i+1);
		scanf("%25s", str_2D[i]);
		escreva_string(f, str_2D[i]);
		fputc('\n', f); // fiquei afim de ver o arquivo com quebra de linha
	}
	fclose(f);
	return 0;
}
