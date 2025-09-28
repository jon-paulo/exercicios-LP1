#include <stdio.h>
#include <string.h>

union identidade{
	long int CPF;
	int RG;
	char nome[40];

};

int main(void){
	union identidade Paulo;
	strncpy(Paulo.nome, "Paulo Henquique Soares", 21);
	union identidade Pedro;
	Pedro.CPF = 54321612345;
	union identidade Pablo;
	Pablo.RG = 123456789;
	printf("Nome: %s, CPF: %ld, RG: %d\n", Paulo.nome, Pedro.CPF, Pablo.RG);

}
