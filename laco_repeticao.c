#include <stdio.h>
#include <stdlib.h>

/*ler 10 numero do teclado, maior entre os 5 primeiros e menor entre os restantes*/

int main() {
	int valor[10];
	int i, maior, menor;
	
	for (i = 0; i < 10; i++) {
        printf("Escolha o numero %d: ", i + 1);
        scanf("%d", &valor[i]);
    }
	
	return 0;
}
