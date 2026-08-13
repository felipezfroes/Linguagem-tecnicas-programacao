#include <stdio.h>

int exercicio_01 ()
{
	// === exercicio 01 ===
	int primeiro, segundo, aux;
	
	//recebendo o primeiro numero
	printf("Insira o primeiro valor:\n");
	scanf("%d", &primeiro);
	
	//recebendo o segundo numero
	printf("Insira o segundo valor:\n");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);
}

int exercicio_02() {
    double valor;
    
    printf("Digite um valor: ");
    scanf("%lf", &valor);
    printf("%.1e\n", valor);
    
    return 0;
}

int exercicio_03()
{
	//conversor de numero em base binaria
	int n, numero_bits, n_binario;
	
	printf("escolha um valor: \n");
	scanf("%d", &n);
	
	printf("escolha um valor de bits: \n");
	scanf("%d", &numero_bits);
	
	if (n == 0)
	{
		printf("0");
		return;
	}
	
	
}

int exercicio_04()
{
	float salario_fixo, total_vendas, salario_final;
	
	printf("Coloque o seu salario fixo: \n");
	scanf("%f", &salario_fixo);
	
	printf("Coloque seu valor total de venda: \n");
	scanf("%f", &total_vendas);
	
	salario_final = salario_fixo + (total_vendas * 0.15);
	printf("O total a receber por mes sera :%.2f", salario_final);
}

int exercicio_05() {
    //soma, media e produto
    
    int n1, n2, n3, n4, soma, media, produto;
    
    //recebendo o primeiro numero
	printf("Insira o primeiro valor:\n");
	scanf("%d", &n1);
	
	//recebendo o segundo numero
	printf("Insira o segundo valor:\n");
	scanf("%d", &n2);
	
	//recebendo o terceiro numero
	printf("Insira o terceiro valor:\n");
	scanf("%d", &n3);
	
	//recebendo o quarto numero
	printf("Insira o quarto valor:\n");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	media = (n1 + n2 + n3 + n4)/4;
    produto = n1 * n2 * n3 * n4;
    
    printf("A soma desses valores: %d\n", soma);
    printf("A media desses valores: %d\n", media);
    printf("O produto desses valores: %d\n", produto);
    return 0;
}

int exercicio_06() {
    
    
    return 0;
}

int exercicio_07() {
    
    
    return 0;
}

int main() {
	exercicio_05();
	
	
	return 0;
}
