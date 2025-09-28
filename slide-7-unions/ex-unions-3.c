#include <stdio.h>

enum Subtipo {
	real,
	dolar,
	euro,
};

typedef union {
    float real;
    float dolar;
    float euro;
} Valor;

typedef struct{
	enum Subtipo moeda;
	Valor valor;
	
} Preco;

void exiba(Preco P){
	if (P.moeda == real){
		printf("%.2f Reais \n", P.valor.real);
	} else {
		if (P.moeda == dolar){
			printf("%.2f Dolares \n", P.valor.dolar);
		} else {
			if (P.moeda == euro){
				printf("%.2f Euros \n", P.valor.euro);
			}
		}
	}
}

void altera(Preco *P, enum Subtipo Tipo){ //vo usar o preco das moedas do dia que to fazendo isso pra conversao
	int contador = 0;
	while (P->moeda != Tipo){ // so porque eu nao queria fazer 6 if. entao fiz 3 e o while roda ate o tipo ficar certo, ele provavelmente so rodaria no maximo 2 vezes
		contador++;
		if (P->moeda == real) { //converte pra dolar. unica moeda que convertendo nao tem como fazer mais de um loop.
			P->valor.dolar = P->valor.real/5.36;
			P->moeda = dolar;
		} else {
			if (P->moeda == dolar){ //converte pra euro. se quiser converter dolar -> real, vai ter que fazer mais um loop.
				P->valor.euro = P->valor.dolar/1.17;
				P->moeda = euro;
			} else {
				if (P->moeda == euro){ //converte pra real. se quiser euro -> dolar, vai ter que fazer mais um loop.
					P->valor.real = P->valor.euro *6.26;
					P->moeda = real;
				}
			}
		}
	}
	printf("contador de loops: %d \n", contador); //so pra ter certeza da minha teoria.
}

int main(){
	Preco Maca;
	printf("real(0), dolar(1), ou euro(2)? \n");
	scanf("%d", &Maca.moeda);
	if (Maca.moeda == real){
		printf("Preco(real): ");
		scanf("%f", &Maca.valor.real);
	} else {
		if (Maca.moeda == dolar){
			printf("Preco(dolar): ");
			scanf("%f", &Maca.valor.dolar);
		} else {
			if (Maca.moeda == euro){
				printf("Preco(euro): ");
				scanf("%f", &Maca.valor.euro);
			}
		}
	} 
	exiba(Maca);
	enum Subtipo novo_tipo;
	printf("converter para {real(0), dolar(1), ou euro(2)}: ");
	scanf("%d", &novo_tipo);
	altera(&Maca, novo_tipo);
	exiba(Maca);	
}