// Importando bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Estabelecendo função principal
double imc(float peso, float altura)
{
    // Estabelenco condição
    if (altura <= 0)
    {
        printf("Erro! Denominador (altura) não pode ser 0.\n");
    return 0;
    }


    // Propondo estrutura método de cálculo do IMC
    return peso/pow(altura, 2);
}

// Estabelecendo função para a coleta de dados
int main(){

    char nome[50], sobrenome[50];
    float peso, altura;

    //coletando dados do usuário
    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("Qual o seu sobrenome?\n");
    scanf("%s", sobrenome);

    printf("Informe seu peso em kg.\n");
    scanf("%f", &peso);
    printf("Informe sua altura.\n");
    scanf("%f", &altura);

    double resultado = imc(peso, altura);


    // Informando que será apresentada a faixa de imc que o usuário se encontra posteriormente
    printf("Olá %s %s! Irei verificar a faixa em que se encontra seu índice de massa corporal.\n", nome, sobrenome);


    // Parâmetros de análise
		if (resultado < 18.5){
			puts("Você está abaixo do peso.");
		}

		else if(resultado >= 18.5 && resultado <= 24.9){
			puts("Você possui peso normal.");
		}

		else if(resultado >= 25.0 && resultado <= 29.9){
			puts("Você possui sobrepeso.");
		}

		else if(resultado >= 30.0 && resultado <= 39.9){
			puts("Você possui obesidade.");
		}

		else{
			puts("Você possui obesidade grave!");
		}

    return 0;

}