#include <stdio.h>
// parei com hardcode porque dar free() em uma variavel que nao foi criada usando malloc da comportamento indefinido

struct Caixa{
    int valor;
    struct Caixa* prox;
};

void exibe (struct Caixa* caixa){
	while(caixa != NULL){
		if (caixa->prox != NULL){
			printf("%d -> ", caixa->valor);
		} else {
			printf("%d \n", caixa->valor);
		}
		caixa = caixa->prox;
	}
}

struct Caixa* remover(struct Caixa* lista, int valor){
	struct Caixa* Exclusao;
	while (lista != NULL && lista->valor == valor){ // se o valor tiver no comeco
        Exclusao = lista->prox;
		lista = lista->prox;
		free(Exclusao); 
	}
	if (lista == NULL) return NULL; // caso soh tinha o valor na lista
	
	struct Caixa* cabeca = lista;
	
	while (lista->prox != NULL) {
        if (lista->prox->valor == valor){
        	Exclusao = lista->prox;
			lista->prox = lista->prox->prox;
        	free(Exclusao);
        } else { // se o atual->prox nao for o mesmo valor
        	lista = lista->prox;
        }
    }
	return cabeca;
}

int main(){

 return 0;
}
