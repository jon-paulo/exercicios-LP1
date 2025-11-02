#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	const char *nome = "teste.txt"; // soh pra poder mudar se quiser
	const char *insert = "|meio|"; // mesma coisa
	long int tam_insert = (long int)strlen(insert);
    
	
	FILE *f = fopen(nome, "rb+"); // rb+ porque eu curto usar binario
    if (!f){
        perror("Erro ao criar arquivo");
        return 1;
    }
    
    // Vamos escrever um texto com 18 bytes
    fseek(f, 0, SEEK_END); 
    long int meio = ftell(f)/2;
    long int segunda_metade = ftell(f) - meio;
    char *buffer = NULL; // guardar segunda metade
	
	if (segunda_metade > 0){
		buffer = malloc(segunda_metade);
		if(!buffer){
			fprintf(stderr, "Erro ao alocar \n");
			fclose(f);
			return 1;
		}
		fseek(f, meio, SEEK_SET);
		fread(buffer, 1 , segunda_metade, f);
	}
	
	fseek(f, meio, SEEK_SET);
	fputs(insert, f);
	if (segunda_metade > 0) {
		fwrite(buffer, 1, segunda_metade, f);
		free(buffer);
	}
	
	fclose(f);
    printf("'%s' inserido no meio do arquivo '%s'. \n", insert, nome);
    return 0;
}