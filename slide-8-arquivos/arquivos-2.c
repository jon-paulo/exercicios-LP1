#include <stdio.h>
#include <string.h>

int main(){
	char str[26];
	char ch; // nao ia funcionar chamar fgetc duas vezes no for, pularia varios char. Tambem eh bom nao ficar chamando funcoes toda hora
	int i;
	FILE * f = fopen("texto.txt", "rb");
	
	for(i = 0; i < 26 && (ch = fgetc(f)) != EOF; i++){
		str[i] = ch;
	}
	str[i] = '\0';
	printf("%s", str);
	fclose(f);
	return 0;
}