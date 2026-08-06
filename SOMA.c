#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//SOMA SIMPLES

int main(int argc, char *argv[]) {
	int a,b,soma;
	
	printf("Escolha o primeiro numero:\n");
	scanf("%d", &a);
	
	printf("Escolha o segundo numero:\n");
	scanf("%d", &b);
	
	soma = a + b;
	printf("O resultado da soma: %d",soma);
	
	return 0;
}
