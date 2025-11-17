#include <stdio.h>

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

int main(){ // soh pra testar

struct Caixa c5 = {5, NULL};
struct Caixa c4 = {7, &c5};
struct Caixa c3 = {9, &c4};
struct Caixa c2 = {3, &c3};
struct Caixa c1 = {1, &c2};
struct Caixa* c = &c1;
exibe(c);

}