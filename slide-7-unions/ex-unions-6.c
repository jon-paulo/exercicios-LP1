#include <stdio.h>

enum { //so pra deixar mais legal de ver os indices do vetor
	x,
	y,
	z,
};

typedef union{
    int pto[3];
    struct {
        int x;
        int y;
        int z;
    };
} ponto;

int main(void) {
    ponto p1;
	p1.pto[x] = 0;
	p1.pto[y] = 28;
	p1.pto[z] = 82;

    printf("[%d, %d, %d]\n", p1.pto[x], p1.pto[y], p1.pto[z]);
	printf("(%d, %d, %d)\n", p1.x, p1.y, p1.z);

    // da pra fazer assim tambem, ja que a memoria ocupada por um vetor de 3 int e uma struct de 3 int eh a mesma
    p1.x = 96;
    p1.y = 75;
    p1.z = 92;

    printf("[%d, %d, %d]\n", p1.pto[x], p1.pto[y], p1.pto[z]);
	printf("(%d, %d, %d)\n", p1.x, p1.y, p1.z);
}