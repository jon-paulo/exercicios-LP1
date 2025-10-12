#include <stdio.h>
#include <string.h>

int main(){
	char str[10][26];
	int j;
	FILE * f = fopen("texto-2D.txt", "wb");
	if (f == NULL) {
        printf("Erro\n");
        return 1; // soh pra fechar o main logo
    }
	for(int i = 0; i < 10; i++){
		printf("linha %d:", i+1);
		scanf("%25s", str[i]);
		for(j = 0; j < strlen(str[i]); j++){
			fputc(str[i][j], f);
		}
		fputc('\n', f); // fiquei afim de ver o arquivo com quebra de linha
	}
	fclose(f);
	return 0;
}
