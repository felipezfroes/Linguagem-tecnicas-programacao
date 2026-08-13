#include <stdio.h>
#include <math.h>

void exercicio_01 ()
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

void exercicio_02() {
	//NOTACAO CIENTIFICA
    double valor;
    int expoente = 0;
    
    //pega um valor qualquer
    printf("Digite um valor: ");
    scanf("%lf", &valor);
    
    // Evita erro de loop infinito se o valor for exatamente zero
    if (valor == 0) {
        printf("0.0 x 10^0\n");
        return 0;
    }
    
    // Trata números maiores ou iguais a 10
    while (valor >= 10.0) {
        valor = valor / 10.0;
        expoente++;
    }
    
    // Trata números menores que 1 (ex: 0.005)
    while (valor < 1.0) {
        valor = valor * 10.0;
        expoente--;
    }
    
    printf("%.1f x 10^%d\n", valor, expoente);
}

void exercicio_03()
{
	//CONVERSOR DE NUMERO DECIMAL PARA BINARIO
	int n, numero_bits, n_binario;
	
	printf("escolha um valor: \n");
	scanf("%d", &n);
	
	printf("escolha um valor de bits: \n");
	scanf("%d", &numero_bits);
	
	if (n == 0)
	{
		printf("0");
	}
	
	
}

void exercicio_04()
{
	//SALARIO FINAL MENSAL
	float salario_fixo, total_vendas, salario_final;
	
	printf("Coloque o seu salario fixo: \n");
	scanf("%f", &salario_fixo);
	
	printf("Coloque seu valor total de venda: \n");
	scanf("%f", &total_vendas);
	
	salario_final = salario_fixo + (total_vendas * 0.15);
	printf("O total a receber por mes sera :%.2f", salario_final);
}

void exercicio_05() {
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
}

void exercicio_06() {
    //RECEBER UM NUMERO DE DIAS EM RELACAO A IDADE E VOLTAR 
    int total_dias, anos, meses, dias, resto;
    
    printf("Escreva o valor de dias:\n");
    scanf("%d", &total_dias);
    
    anos = total_dias / 365;
    resto = total_dias % 365;
    
    meses = resto / 30;
    dias = resto % 30;
    
    printf("Voce tem %d anos, %d meses e %d dias de vida", anos, meses, dias);
}

void exercicio_07() {
	//VOLUME DA ESFERA
	const float pi = 3.14159;
	float raio, volume;
	
	printf("Escolha o raio da esfera: \n");
	scanf("%f", &raio);
	
	volume = (4.0/3.0) * pi * (raio * raio * raio);
    printf("Uma esfera de raio %.2f tem %.2f de volume.\n", raio, volume);
}

void exercicio_08()
{
	//CALCULAR A DISTANCIA ENTRE AS COORDENADAS, DISTANCIA EUCLIDIANA
	float x1, y1, x2, y2, d;
	
	//recebendo o x1
	printf("Insira a coordenada X1:\n");
	scanf("%f", &x1);
	
	//recebendo o y1
	printf("Insira a coordenada Y1:\n");
	scanf("%f", &y1);
	
	//recebendo o x2
	printf("Insira a coordenada X2:\n");
	scanf("%f", &x2);
	
	//recebendo o y2
	printf("Insira a coordenada Y2:\n");
	scanf("%f", &y2);
	
	//calcula distancia
	d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	
	//escreva resposta final
	printf("A distancia entre a coordenada p1( %.1f, %.1f) e p2( %.1f, %.1f) = %.2f", x1, y1, x2, y2);
}

int main() {
    int opcao;

    do {
        //Exibe o menu
        printf("\n===== MENU DE EXERCICIOS =====\n");
        printf("1 - Executar Exercicio 1\n");
        printf("2 - Executar Exercicio 2\n");
        printf("3 - Executar Exercicio 3\n");
        printf("4 - Executar Exercicio 4\n");
        printf("5 - Executar Exercicio 5\n");
        printf("6 - Executar Exercicio 6\n");
        printf("7 - Executar Exercicio 7\n");
        printf("8 - Executar Exercicio 8\n");
        printf("0 - Sair\n");
        printf("===== ESCOLHA UM OPCAO =====\n");
        
        //Le a opcao escolhida
        scanf("%d", &opcao);

        //Direciona para o exercício correto
        switch(opcao) {
            case 1:
                exercicio_01();break;
                
            case 2:
                exercicio_02(); break;
                
			case 3:
                exercicio_03();break;
                
			case 4:
                exercicio_04();break;
                
			case 5:
                exercicio_05();break;
                
			case 6:
                exercicio_06();break;	
                
            case 7:
                exercicio_07();break;  
				
			case 8:
                exercicio_08();break;	  
						                
            case 0:
                printf("\nSaindo do programa...\n");break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while(opcao != 0); //Continua até a opção ser 0

    return 0;
}
