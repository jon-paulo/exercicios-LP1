#include <stdio.h> 


int main(void){
	float kilo;
	float mile;
	printf("velocidade do carro: \n");
	scanf("%f", &mile);
	kilo = mile * 1.6;
	if (kilo > 100){
		printf("DESACELERE \n");
	}else{
		if (kilo < 80){
			printf("ACELERE \n");
		}else{
			printf("MANTENHA \n");
	}
	 }
	  }
