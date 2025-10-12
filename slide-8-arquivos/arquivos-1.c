#include <stdio.h>
#include <string.h>

int main(){
	char str[26]; //to contando com o \0
	FILE * f = fopen("texto.txt", "wb");
	if (f == NULL) {
        printf("Erro\n");
        return 1; // soh pra fechar o main logo
    }
	scanf("%25s", str);
/*	for(int i = 0; i < strlen(str); i++){ // soh pra eu ver a string inteira, ate o 0
		printf("%c", str[i]);
		printf("%d", i);
	}
	puts("");
*/	for(int j = 0; j < strlen(str); j++){
		fputc(str[j], f);
	}
	fclose(f);
	return 0;
}
