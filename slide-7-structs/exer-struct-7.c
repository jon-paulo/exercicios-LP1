#include <stdio.h>

struct Life_Achievements {
	int horas_dormidas;
	int massa_biologica_consumida;
	int insetos_assassinados;
	int massa_biologica_insectoide_consumida;
	int percent_completion;
	int segundos_sorrindo;
};

void preenche(struct Life_Achievements* l){
        printf("so bota numeros: \n");
        scanf("%d %d %d %d %d %d", &l->horas_dormidas, &l->massa_biologica_consumida, 
		&l->insetos_assassinados, &l->massa_biologica_insectoide_consumida, 
		&l->segundos_sorrindo, &l->percent_completion);

}

int main(void){
	struct Life_Achievements l;
	preenche(&l);
	printf("/===============| LIFE STATS |===============\\ \n");
	printf("Horas dormidas: %d \n Massa biologica consumida: %d\n Massa biologica consumida: %d\n  Massa biologica insectoide consumida: %d\n Insetos assassinados: %d\n Segundos sorrindo: %d\n Completion Percentage: %d\n", l.horas_dormidas, l.massa_biologica_consumida, 
	l.massa_biologica_insectoide_consumida, l.insetos_assassinados, l.segundos_sorrindo, l.percent_completion);
}