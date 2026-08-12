#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* AREA DO CIRCULO  */

int main(int argc, char *argv[]) {
	float raio, areac;
	
	printf("=== SISTEMA DA AREA DO CIRCULO ===\n");
	printf("Escolha um raio para o circulo:\n");
	scanf("%f", &raio);
	
	areac = pi * (raio * raio);
	
	printf("A area do circulo de raio %.2f = %.4f\n", raio, areac);
	
	float B, b, h, areat;
	printf("\n=== SISTEMA DA AREA DO TRAPEZIO ===\n");
	printf("Escolha um valor para a base maior:\n");
	scanf("%f", &B);
	
	printf("Escolha um valor para a base menor:\n");
	scanf("%f", &b);
	
	printf("Escolha um valor para a altura:\n");
	scanf("%f", &h);
	
	areat = ((B+b)*h)/2;
	
	printf("A area do trapezio de base maior %.2f, base menor %.2f e altura %.2f = %.2f", B, b, h, areat);
	
	return 0;
}
