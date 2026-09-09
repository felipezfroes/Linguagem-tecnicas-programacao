#include <stdio.h>
#include <stdlib.h>

int multDigito(int dig, int valor)
{
	return dig*valor;
}

int main() {
	int dg1, dg2, dg3, dg4, dg5, dg6, dg7, dg8, dg9, dgv1, dgv2, soma, restoI, restoII;
	
	printf("Digte o CPF (X X X . X X X . X X X - X X): ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &dg1, &dg2, &dg3, &dg4, &dg5, &dg6, &dg7, &dg8, &dg9, &dgv1, &dgv2);
	
	soma = multDigito(dg1, 10) + multDigito(dg2, 9) + multDigito(dg3, 8)+ 
			multDigito(dg4, 7) + multDigito(dg5, 6) + multDigito(dg6, 5)+ 
			multDigito(dg7, 4) + multDigito(dg8, 3) + multDigito(dg9, 2);
	
	soma *= 10;
	restoI = soma%11;
	
	if (restoI == 10) restoI = 0;
	
	soma = multDigito(dg1, 11) + multDigito(dg2, 10) + multDigito(dg3, 9)+ 
			multDigito(dg4, 8) + multDigito(dg5, 7) + multDigito(dg6, 6)+ 
			multDigito(dg7, 5) + multDigito(dg8, 4) + multDigito(dg9, 3)+ multDigito(dgv1, 2);
	
	soma *= 10;
	restoII = soma%11;
	if (restoII == 10) restoII = 0;
	
	if (restoI == dgv1 && restoII == dgv2)
	{
		printf("CPF VALIDO!");
	}else {
		printf("CPF INCORRETO!");
	}
	
	return 0;
}
