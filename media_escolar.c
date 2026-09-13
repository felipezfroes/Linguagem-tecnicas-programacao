#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[50];
	float nota01, nota02, nota03, media;
	
	printf("Escreva o nome do aluno: ");
	scanf("%s", nome);
	
	printf("Escreva a nota 01 de %s (De zero a dez): ", nome);
	scanf("%f", &nota01);
	
	printf("Escreva a nota 02 de %s (De zero a dez): ", nome);
	scanf("%f", &nota02);
	
	printf("Escreva a nota 03 de %s (De zero a dez): ", nome);
	scanf("%f", &nota03);
	
	media = (nota01 + nota02 + nota03)/3.0;
	
	// Exibição do resultado formatado com cores
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Aluno: %s\n", nome);
    printf("Media: %.1f\n", media);
	
	if (media >= 7.0 && media <= 10.0) {
        printf("Situacao: Aprovado!\n");
    }
    else if (media >= 4.0 && media < 7.0) {
        printf("Situacao: Exame!\n");
    }
    else {
        printf("Situacao: Reprovado!\n");
    }
	
	return 0;
}
