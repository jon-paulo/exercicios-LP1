#include <stdio.h>

struct Personagem {
	int forca;
	int energia;
	int experiencia;
};

int main(void){
	struct Personagem p1 = {10, 50, 30};
	struct Personagem p2;
	p2.forca = 18;
	p2.energia = 20;
	p2.experiencia = 25;

	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
	p1.forca, p1.energia, p1.experiencia,
	p2.forca, p2.energia, p2.experiencia);	
}
