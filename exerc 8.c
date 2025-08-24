#include <stdio.h>

int main() {
	int n1;
	int n2;
	printf("n1: \n");
	scanf("%d", &n1);
	printf("n2: \n");
	scanf("%d", &n2);
	if (n1 > n2){
		for (int i = n2+1; i < n1; i++) {
			printf("%d\n", i);
		}
	}
	if (n1 < n2){
		for (int i = n2-1; i > n1; i--){
			printf("%d\n", i);
		}
	}
	 }