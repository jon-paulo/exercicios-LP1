#include <stdio.h>

//nao tive como misturar com a minha resposta do exercicio 7 structs, era muito especifico.

enum Classe {
	Lutador,
	Monge,
	Mago,
	Arqueiro,
};
struct lutador{
	int weapon_modifier;
};
struct monge {
	int ki; 
};
struct mago {
	int mana;
	int magic_modifier; //nao consegui pensar em como traduzir isso
};
struct arqueiro{
	int weapon_modifier;
	int range_modifier;
};

struct Personagem {
	int level;
	int HP;
	int Str;
	int Dex;
	enum Classe classe;
	union {
		struct lutador Lutador;
		struct monge Monge;
		struct mago Mago;
		struct arqueiro Arqueiro;
	};
};

void preenche(struct Personagem* P){
        printf("Level: ");
        scanf("%d", &P->level);
        printf("HP: ");
        scanf("%d", &P->HP);
        printf("Str: ");
        scanf("%d", &P->Str);
        printf("Dex: \n");
        scanf("%d", &P->Dex);
        printf("Indice de Classes: \n Lutador(0), Monge(1), Mago(2), Arqueiro(3)\n");
        printf("Classe(Indice de 0 a 3): ");
		scanf("%d", &P->classe);
		switch(P->classe){
			case Lutador:
				printf("Weapon Modifier: ");
				scanf("%d", &P->Lutador.weapon_modifier);
				break;
			case Monge:
				printf("Ki: ");
				scanf("%d", &P->Monge.ki);
				break;
			case Mago:
				printf("Mana: ");
				scanf("%d", &P->Mago.mana);
				printf("Magic Modifier: ");
				scanf("%d", &P->Mago.magic_modifier);
				break;
			case Arqueiro:
				printf("Weapon Modifier: ");
				scanf("%d", &P->Arqueiro.weapon_modifier);
				printf("Range Modifier: ");
				scanf("%d", &P->Arqueiro.range_modifier);
				break;
		}
}

int main(void){
	struct Personagem P;
	preenche(&P);
	printf("/===============| Personagem |===============\\ \n");
	printf("Level: %d \n HP: %d\n Str: %d\n Dex: %d\n Classe: %d\n Mana: %d\n Magic: %d\n", P.level, P.HP, 
	P.Str, P.Dex, P.classe, P.Mago.mana, P.Mago.magic_modifier);
}