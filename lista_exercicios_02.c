#include <stdio.h>

//LISTA 02 DE LINGUAGEM TECNICA DE PROGRAMACAO

void exercicio_01()
{
	//CALCULAR O ANO DE NASCIMENTO PELA IDADE E ANO ATUAL
	int idade, anoAtual, anoNascimento;
	
	printf("Escreva sua idade:\n");
	scanf("%d", &idade);
	
	printf("Escreva o ano atual:\n");
	scanf("%d", &anoAtual);
	
	anoNascimento = anoAtual - idade;
	printf("Voce nasceu em %d\n", anoNascimento);
}

void exercicio_02()
{
	//TRANSFORMAR UM VELOCIDADE DE KM/H PARA M/S
	float K, M;
	
	printf("Escreva uma velocidade em km/h:\n");
	scanf("%f", &K);
	
	M = K / 3.6;
	printf("A velocidade %.2fkm/h corresponde a %.2fm/s\n", K, M);
}

void exercicio_03()
{
	//TRANSFORMAR REAL EM DOLAR
	float real, cotacao, dolar;
	
	printf("Digite o valor em reais (R$): ");
	scanf("%f", &real);
	
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &cotacao);
	
	if (cotacao > 0)
	{
		dolar = real / cotacao;
		
		printf("O valor correspondente de %.2f reais em dolares e: US$ %.2f\n", real, dolar);
	} else {
        printf("A cotacao do dolar deve ser maior que zero.\n");
    }
}

void exercicio_04()
{
	//TRANSFORMAR CELSIUS EM FAHRENHEIT
	float celsius, fahrenheit;
	
	printf("Digite um valor em celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32;
		
	printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
}

void exercicio_05()
{
	//TRANSFORMAR ANGULO EM RADIANO
	const float pi = 3.141592;
	float angulo, radiano;
	
	printf("Digite um angulo em graus: ");
	scanf("%f", &angulo);
	
	radiano = angulo * pi/180;
	printf("%.2f graus equivalem a %.2f radianos.\n", angulo, radiano);
}

void exercicio_06()
{
	//LER NUMERO INTEIRO E ESCREVER ANTECESSOR E SUCESSOR
	int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O antecessor de %d e: %d\n", numero, numero - 1);
    printf("O sucessor de %d e: %d\n", numero, numero + 1);
}

void exercicio_07()
{
	//CALCULAR O ANO DE NASCIMENTO PELA IDADE E ANO ATUAL
}

void exercicio_08()
{
	//CALCULAR O ANO DE NASCIMENTO PELA IDADE E ANO ATUAL
}

void exercicio_09()
{
	//CALCULAR O ANO DE NASCIMENTO PELA IDADE E ANO ATUAL
}

void exercicio_10()
{
	//CALCULAR O ANO DE NASCIMENTO PELA IDADE E ANO ATUAL
}

int main() {
	exercicio_07();
	return 0;
}
