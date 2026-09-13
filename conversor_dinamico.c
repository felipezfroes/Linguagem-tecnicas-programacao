#include <stdio.h>
#include <stdlib.h>

void calcular_fahrenheit ()
{
	float celsius, fahrenheit;
	
	printf("Qual o valor em Celsius (C) para converter :");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9/5) + 32;
	printf("O valor de %f C = %.2f F", celsius, fahrenheit);
}

void calcular_celsius()
{
	float celsius, fahrenheit;
	
	printf("Qual o valor em Fahrenheit (F) para converter :");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9;
	printf("O valor de %f F = %.2f C", celsius, fahrenheit);
}

int main() {
	//CONVERSOR DINAMICO
	int opcao;
	
	printf("=== CONVERSOR DINAMICO ===\n");
        printf("1 - Celsius -> Fahrenheit\n");
        printf("2 - Fahrenheit -> Celsius\n");
        printf("Escolha o tipo de conversao: ");
        scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 1: calcular_fahrenheit();break; 
		case 2: calcular_celsius();break;
		default : printf("\nOpcao invalida! Tente novamente.\n\n");break;
	}
	
	return 0;
}
