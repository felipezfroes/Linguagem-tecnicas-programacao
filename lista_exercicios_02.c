#include <stdio.h>
#include <stdlib.h>

//LISTA 02 DE LINGUAGEM TECNICA DE PROGRAMACAO

void mostra_menu()
{
	printf(
		    "\n==================================================\n"
		    "           MENU DE EXERCICIOS - LISTA 02          \n"
		    "==================================================\n"
		    " 1. Calcular ano de nascimento\n"
		    " 2. Converter Km/h para M/s\n"
		    " 3. Converter Real para Dolar\n"
		    " 4. Converter Celsius para Fahrenheit\n"
		    " 5. Converter Angulo para Radiano\n"
		    " 6. Mostrar antecessor e sucessor\n"
		    " 7. Calcular quantia por ganhador\n"
		    " 8. Converter segundos para Horas:Min:Seg\n"
		    " 9. Calcular distancia e combustivel gasto\n"
		    "10. Avaliar o maior entre 4 valores\n"
		    " 0. Sair do programa\n"
		    "==================================================\n"
		    " Escolha um exercicio para ver: "
		);
}

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
	float kmh, ms;
	
	printf("Escreva uma velocidade em km/h:\n");
	scanf("%f", &kmh);
	
	ms = kmh / 3.6;
	printf("A velocidade %.2fkm/h corresponde a %.2fm/s\n", kmh, ms);
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
	//CALCULAR A QUANTIA RECEBIDA POR CADA GANHADOR
    double total_premio = 780000.00;
    
    double primeiro_ganhador = total_premio * 0.46;
    double segundo_ganhador = total_premio * 0.32;
    double terceiro_ganhador = total_premio * (1.0 - 0.46 - 0.32); // Restante (22%)

    printf("Valor total do concurso: R$ %.2f\n\n", total_premio);
    printf("O primeiro ganhador (46%%) receberá: R$ %.2f\n", primeiro_ganhador);
    printf("O segundo ganhador (32%%) receberá: R$ %.2f\n", segundo_ganhador);
    printf("O terceiro ganhador (22%%) receberá: R$ %.2f\n", terceiro_ganhador);

}

void exercicio_08()
{
	//TEMPO EM SEGUNDOS DE UM EVENTO PARA HORAS:MINUTOS:SEGUNDOS
	int duracao, horas, minutos, segundos;
	
	printf("Informe a duracao em segundos do evento: \n");
	scanf("%d", &duracao);
	
	horas = duracao / 3600;
    minutos = (duracao % 3600) / 60;
    segundos = duracao % 60;
	
	printf(
    "A duracao do evento foi de %02dhoras : %02dminutos : %02dsegundos\n",horas,minutos,segundos);
}

void exercicio_09()
{
	//CALCULAR A DISTÂNCIA E O COMBUSTÍVEL GASTO EM UMA VIAGEM
	
	float distancia_percorrida, combustivel_necessario, tempo_gasto, veloc_media;
	
	printf("Informe o tempo gasto na viagem em horas: \n");
	scanf("%f", &tempo_gasto);
	
	printf("Informe a velocidade media durante a viagem em km/h: \n");
	scanf("%f", &veloc_media);
	
	distancia_percorrida = tempo_gasto * veloc_media;
	combustivel_necessario = distancia_percorrida / 12;
	
	printf("A distancia percorrida foi de %.3f km e foram gastos %.3f litros.\n", distancia_percorrida, combustivel_necessario);
}

void exercicio_10()
{
	//4 VALORES E AVALIAR QUAL O MAIOR
	int a, b, c, d, maiorAB, maiorCD, maiorFinal;
	
	printf("Informe o primeiro valor: \n");
	scanf("%d", &a);
	
	printf("Informe o segundo valor: \n");
	scanf("%d", &b);
	
	printf("Informe o terceiro valor: \n");
	scanf("%d", &c);
	
	printf("Informe o quarto valor: \n");
	scanf("%d", &d);
	
	maiorAB = (a + b + abs(a-b)) /2;
	maiorCD = (c + d + abs(c-d)) /2;
	maiorFinal = (maiorAB + maiorCD + abs(maiorAB - maiorCD)) / 2;
	
	printf("%d eh o maior!\n", maiorFinal);
}

int main() {
	
	int opcao;
	
	do {
		//Exibe o menu
		mostra_menu();
		
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1: 	exercicio_01(); break;
			case 2: 	exercicio_02(); break;
			case 3: 	exercicio_03(); break;
			case 4: 	exercicio_04(); break;
			case 5: 	exercicio_05(); break;
			case 6: 	exercicio_06(); break;
			case 7: 	exercicio_07(); break;
			case 8: 	exercicio_08(); break;
			case 9: 	exercicio_09(); break;
			case 10: 	exercicio_10(); break;
			case 0:		printf("\nSaindo do programa...\n");break;
			default: 	printf("\nOpcao invalida! Tente novamente.\n");
		} 
	} while(opcao != 0); //Continua até a opção ser 0	
	
	
	return 0;
}
