#include <stdio.h>

struct Personagem {
        int forca;
        int energia;
        int experiencia;
};

struct Personagem preencheA(void){
	int a, b, c;
	printf("força, energia e experiencia: \n");
	scanf("%d %d %d", &a, &b, &c);
	struct Personagem px = {a, b, c};
	
	return px;
}

int main(void){
	struct Personagem p1 = preencheA();
	struct Personagem p2 = preencheA();

        printf("(%d,%d,%d) vs (%d,%d,%d)\n",
        p1.forca, p1.energia, p1.experiencia,
        p2.forca, p2.energia, p2.experiencia);
}

