#include <stdio.h>
#include <stdlib.h>

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

struct Caixa* concatena(struct Caixa* l1, struct Caixa* l2) {
    struct Caixa *cabeca = NULL;
    struct Caixa *atual = NULL;
    struct Caixa *novo;

    struct Caixa *p = l1;
    while (p != NULL) {
        novo = malloc(sizeof(struct Caixa));
        novo->valor = p->valor;
        novo->prox = NULL;

        if (cabeca == NULL) {
            cabeca = novo;
            atual = novo;
        } else {
            atual->prox = novo;
            atual = novo;
        }
        p = p->prox;
    }

    p = l2;
    while (p != NULL) {
        if (contem(l1, p->valor) == 0) { 
            novo = malloc(sizeof(struct Caixa));
            novo->valor = p->valor;
            novo->prox = NULL;

            if (cabeca == NULL) {
                cabeca = novo;
                atual = novo;
            } else {
                atual->prox = novo;
                atual = novo;
            }
        }
        p = p->prox;
    }

    return cabeca;
}

struct Caixa* insere (struct Caixa* lista, int valor){
	struct Caixa* nova = malloc(sizeof(struct Caixa));
	nova->valor = valor;
	nova->prox = lista;
	lista = nova;
	return lista;
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

int main(){ // soh pra testar

struct Caixa* a = NULL;
a = insere(a, 5);
a = insere(a, 7);
a = insere(a, 9);
a = insere(a, 3);
a = insere(a, 1);

struct Caixa* b = NULL;
b = insere(b, 3);
b = insere(b, 13);
b = insere(b, 9);

struct Caixa* c = NULL;

exibe(a); exibe(b);
c = concatena(a, b);
exibe(c);
exibe(a); exibe(b);

}