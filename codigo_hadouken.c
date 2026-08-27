#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b;
	printf("Escreva 2 valores: ");
	scanf("%d %d", &a,&b);
	
	if (a > 0 && b > 0)
	{
		//menores q 10
		if (a < 10 && b < 10)
		{
			//verificar se sao primos
			if ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7))
			{
				//area e hipotenusa do triangulo formado
				float area, hipotenusa;
				area = (a * b)/2;
				hipotenusa = sqrt((pow(a,2) + pow(b,2)));
				
				printf("A area: %f\nHipotenusa: %f", area, hipotenusa);
			} else 
			{
				printf("Soma: %d\nDiferenca: %d\nMultiplicacao: %d\nDivisao: %d", a+b, a-b, a*b, a/b);
			}
		} else 
		{
			//sao multiplos um pelo outro
			if (a % b == 0)
			{
				printf("Eh multiplo");
			} else {
				printf("Nao eh multiplo");
			}
		}
	} else 
	{
		printf("Inversos: %d %d", -a, -b);
	}
	
	return 0;
}
