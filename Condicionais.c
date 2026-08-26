#include <stdio.h>
#include <stdlib.h>

//CODIGOS DE CONDICIONAIS

int main() {
	int a,b,c,r;
			
	printf("Entre com os valores para A B C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b)
	{
		r = a;		
	}		
	else{
		r = b;
	}
	
	if (c>r)
	{
		r = c;
	}
	printf("%d eh maior!\n", r);	
	
	int n;
			
	printf("Escreva um valor: ");
	scanf("%d", &n);
	
	if (n % 2 == 0)
	{
		printf("%d eh par!", n);		
	}	
	else {
		printf("%d eh impar!", n);	
	}
	return 0;
}
