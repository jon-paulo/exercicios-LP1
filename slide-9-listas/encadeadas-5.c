#include <stdio.h>
#include <stdlib.h>

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
		lista = lista->prox;
	}
	if (lista == NULL) return NULL; // caso soh tinha o valor na lista
	
	struct Caixa* cabeca = lista;
	
	while (lista->prox != NULL) {
        if (lista->prox->valor == valor){
			lista->prox = lista->prox->prox;
        } else { // se o atual->prox nao for o mesmo valor
        	lista = lista->prox;
        }
    }
	return cabeca;
}

int main(){
struct Caixa c5 = {5, NULL};
struct Caixa c4 = {7, &c5};
struct Caixa c3 = {9, &c4};
struct Caixa c2 = {3, &c3};
struct Caixa c1 = {1, &c2};

struct Caixa* cabeca = &c1;
exibe(cabeca); // mostrando a lista normal com 9
cabeca = remover(cabeca, 9); // removendo 9
exibe(cabeca); // exibindo sem 9
cabeca = &c3; // botando 9 no inicio da lista
c3.prox = &c1;
exibe(cabeca); // mostrando 9 no inicio
cabeca = remover(cabeca, 9); // tira 9 do inicio
exibe(cabeca); // mostra
}

