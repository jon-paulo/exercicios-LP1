#include <stdio.h>
#include <stdbool.h> //eu ia usar enums ao inves da biblioteca, mas vi que usar biblioteca tem mais seguranca no codigo

enum tipo {
	Anfibio,  //0
	Ave,      //1
	Mamifero, //2
	Reptil,	  //3
};
struct Anfibio {
	unsigned char patas;
	float espessura_pele;
	bool cauda;
};	
struct Ave {
	float comprimento_bico; // cm
	float autonomia_de_voo; //nao sei qual unidade usaria, galinhas voam por 40 segundos, aves migratorias voam por dias, float serve pra qualquer coisa eu acho.
	float frequencia_canto;
};
struct Mamifero {
	int dentes;
	float vol_cerebro; // cm^3
	float velo_terrestre; // km/h
};
struct Reptil {
	bool venenoso;
	char autono_agua[255]; //fiquei confuso se era so uma pergunta sobre quanto tempo ele pode ficar sem terra firme, ou se era uma pergunta mais complexa sobre as capacidades dele na agua, entao deixei como string, escreva o que quiser.
	float espessura_ovo; 
};

typedef struct {
	enum tipo tipo;
	union {
		struct Anfibio Anfibio; // pra que trocar de nomes neh.
		struct Ave Ave;
		struct Mamifero Mamifero;
		struct Reptil Reptil;
	};
} Animal; 

int main(){
	Animal Elefante;
	Elefante.tipo = Mamifero;
	Elefante.Mamifero.dentes = 28; //eu fiz as structs fora da union pra poder ler na hora de classificar
	Elefante.Mamifero.velo_terrestre = 24;
	Elefante.Mamifero.vol_cerebro = 3700;
	
	Animal Falcon; // falcao sem acento fica feio, preferi escrever em ingles
	Falcon.tipo = Ave;
	Falcon.Ave.comprimento_bico = 34;
	Falcon.Ave.autonomia_de_voo = 46;
	Falcon.Ave.frequencia_canto = 70.6;
	
	Animal Komodo; //dragao de komodo
	Komodo.tipo = Reptil;
	Komodo.Reptil.venenoso = true;
	Komodo.Reptil.espessura_ovo = 13;
	strncpy(Komodo.Reptil.autono_agua, "Quase nula, apenas curtos periodos em perseguicoes", 51);
	
	Animal Antilope;
	Antilope.tipo = Mamifero;
	Antilope.Mamifero.dentes = 34;
	Antilope.Mamifero.velo_terrestre = 83.2;
	Antilope.Mamifero.vol_cerebro = 131;
	
	Animal Baleia; //Baleia Azul pra ser especifico
	Baleia.tipo = Mamifero;
	Baleia.Mamifero.dentes = 400; // elas tem uns dentes estranhos de creatina chamados de barbas
	Baleia.Mamifero.velo_terrestre = 0;
	Baleia.Mamifero.vol_cerebro = 8411;
	
	Animal Golfinho;
	Golfinho.tipo = Mamifero;
	Golfinho.Mamifero.dentes = 80; 
	Golfinho.Mamifero.velo_terrestre = 0;
	Golfinho.Mamifero.vol_cerebro = 1402;
	
	Animal Foca;
	Foca.tipo = Mamifero;
	Foca.Mamifero.dentes = 34;
	Foca.Mamifero.velo_terrestre = 2;
	Foca.Mamifero.vol_cerebro = 271;
	
	
	printf("%d %d %.2f %.2f", Elefante.tipo = Mamifero, Elefante.Mamifero.dentes, Elefante.Mamifero.velo_terrestre, Elefante.Mamifero.vol_cerebro);
	printf("Autonomia Aquatica de um Dragao de Komodo: %s", Komodo.Reptil.autono_agua);

}
