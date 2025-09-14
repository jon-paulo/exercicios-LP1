# include <stdio.h>

int main (void){
	int a;
	int b;
	int *p;
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	if (a < b){ //se forem iguais o codigo prefere a variavel a como maior. Pelo Else
	p = &b;
	} else {
		p = &a;
	}
	*p = *p-50;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
