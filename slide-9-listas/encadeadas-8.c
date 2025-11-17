#include <stdio.h>

struct Caixa{
    int valor;
    struct Caixa* prox;
};

int contem (struct Caixa* lista, int valor){
	while(lista != NULL){
		if (lista->valor == valor){
			return 1;
		}
		lista = lista->prox;
	}
	return 0;
}

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

struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2){
	struct Caixa* fim_l1 = l1;
	while (fim_l1->prox != NULL) {
        fim_l1 = fim_l1->prox;
    }
    
    struct Caixa* atual_l2 = l2;
    while (atual_l2 != NULL) {
        struct Caixa* proximo_l2 = atual_l2->prox;
		if (contem(l1, atual_l2->valor) == 0) {
            fim_l1->prox = atual_l2;
            fim_l1 = atual_l2;
            fim_l1->prox = NULL;
        }
        atual_l2 = proximo_l2;
	}
	return l1;
}

int main(){ // soh pra eu testar

struct Caixa c5 = {5, NULL};
struct Caixa c4 = {7, &c5};
struct Caixa c3 = {9, &c4};
struct Caixa c2 = {3, &c3};
struct Caixa c1 = {1, &c2};
struct Caixa* c = &c1;

struct Caixa b3 = {9, NULL};
struct Caixa b2 = {11, &b3};
struct Caixa b1 = {1, &b2};
struct Caixa* b = &b1;

c = concatena(c, b);
exibe(c);
}