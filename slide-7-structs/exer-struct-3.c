#include <stdio.h>

struct Personagem {
        int forca;
        int energia;
        int experiencia;
};

void preencheB(struct Personagem* p){
        printf("força, energia e experiencia: \n");
        scanf("%d %d %d", &p->forca, &p->energia, &p->experiencia);

}

void main (void) {
    struct Personagem p1;
    preencheB(&p1);

    struct Personagem p2;
    preencheB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
}
