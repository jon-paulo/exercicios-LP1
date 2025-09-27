#include <stdio.h>

enum Dia {
	Dom = 1,
	Seg = 2,
	Ter = 3,
	Qua = 4,
	Qui = 5,
	Sex = 6,
	Sab = 7,
};

const char* nome (enum Dia d) { // usei const soh por ser um bom costume.
    switch (d) {
        case Dom:
            return "Domingo";
        case Seg:
            return "Segunda";
        case Ter:
            return "Terca";
        case Qua:
            return "Quarta";
        case Qui:
        	return "Quinta";
        case Sex:
        	return "Sexta";
        case Sab:
        	return "Sabado";
		default:
            return "Valor desconhecido. Dias da semana sao de 1 a 7.";
    }
}

int main (void){
	enum Dia dia;
	printf("nome do dia da semana(1 a 7): ");
	scanf("%d", &dia);
	printf("%s", nome(dia));

}
