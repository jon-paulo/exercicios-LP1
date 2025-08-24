#include <stdio.h>
#include <string.h>

int main() {
	char nome[255];
	char maior[255];
	char menor[255]; // caso de empate, concatenar
	int total;
	int max = -1; // nao tem como pontuar negativo, o primeiro time vai ser maior que isso
	int min = 1000000; //so pra garantir que o primeiro time fique com o min(em uma partida de futebol com tantos pontos e absurdo)
	int vit;
	int emp;
	printf("vai coloando os times, vitorias, derrotas e empates \n");
	for (int i = 20; i > 0; i--) {
		total = 0;
    	
		printf("nome do time: \n");
		scanf("%s", nome);
		
		printf("vitorias: \n");
		scanf("%d", &vit);
		vit = vit*3;
		
		printf("derrotas: \n");
		scanf("%d", &emp); //so pra ter um input que vai ser subsituido depois, derrotas nao contam pra pontuacao mesmo
		printf("empates: \n");
		scanf("%d", &emp);
		                                                       
		total = vit + emp;
		if (total >= max) {
			if (max <= min) { //o primeiro time vai ser o max (se os times ficarem empatando pra sempre, o min e max serao a lista de todos os times)
				if (total > max) {
					max = total; // total do primeiro time vira o min e max
					min = max;
				    strcpy(maior, nome);
					strcpy(menor, maior);
					} else { // total = max (empate)
						char str[] = ", ";
						strcat(maior, str);
						strcat(maior, nome);
						strcat(menor, str);
						strcat(menor, nome);
						}
			} else { // quando o maximo e minimo nao forem mais iguais
				if (total > max){
					max = total;
				    strcpy(maior, nome); 
					} else { // total = max (empate)
						char str[] = ", ";
						strcat(maior, str);
						strcat(maior, nome);
						}
				}
		} else if (total <= min) {
		    if (total < min){
					min = total;
				    strcpy(menor, nome); 
					} else { // total = min (empate)
						char str[] = ", ";
						strcat(menor, str);
						strcat(menor, nome);
					}
			}
		printf("time(s) de maior pontuacao: %s \n", maior);
		printf("time(s) de menor pontuacao: %s \n", menor);
	}
	return 0;
}