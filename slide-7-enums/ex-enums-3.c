#include <stdio.h>
#include <string.h>

typedef enum {
	False,
	True
} bool;

struct pessoa{
	bool vivo;
	char Nacionalidade[50];
};

int main(void){
	struct pessoa p1;
	p1.vivo = False;
	strncpy(p1.Nacionalidade, "Brasileiro", 51);
	printf("%d, %s", p1.vivo, p1.Nacionalidade);
}
