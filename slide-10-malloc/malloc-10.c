#include <stdio.h>
#include <stdlib.h>

struct Caixa{
    int valor;
    struct Caixa* prox;
};

int retira(struct Caixa* cabeca, int valor) { // soh funciona com nó cabeça
    struct Caixa* ant = cabeca;
    struct Caixa* p = cabeca->prox;

    while (p != NULL) {
        if (p->valor == valor) {
            ant->prox = p->prox;
            int valorRetornado = p->valor;
            free(p);
            
            return valorRetornado;
        }
        ant = p;
        p = p->prox;
    }

    return -1; // se nao achou o valor sla
}

int main(){

 return 0;
}