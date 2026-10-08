#include <stdio.h>
#include <stdlib.h>

/* Ler 10 números do teclado: maior entre os 5 primeiros e menor entre os restantes */

int compara(int a, int b) {
    if (a > b) return a;
    else return b;
}

int comparamenor(int a, int b) {
    if (a < b) return a;
    else return b;
}

int main() {
    int valores[10];
    int i, maior, menor;
    
    for (i = 0; i < 10; i++) {
        printf("Escolha o numero %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    
    for (i = 1, maior = valores[0]; i < 5; i++) {
        maior = compara(maior, valores[i]);
    }
    
    
    for (i = 6, menor = valores[5]; i < 10; i++) {
        menor = comparamenor(menor, valores[i]);
    }
    
    printf("\nMaior entre os 5 primeiros: %d\n", maior);
    printf("Menor entre os 5 ultimos: %d\n", menor);
	
    return 0;
}
