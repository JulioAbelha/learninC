// Esse programa irá calcular a área de um triangulo

#include <stdio.h> // Biblioteca para usar 'printf' e 'scanf'

int main() // Função principal do tipo main
{
    float base,altura,area; // Criando variáveis do tipo float, o valor da base, da altura e da area do triangulo, que serão definidos a seguir

    printf("Digite o valor da base do triangulo em cm: "); // Pedindo para o usuário digitar o valor da base do triangulo em centímetros
    scanf("%f", &base); // Armazenando o valor digitado pelo usuário na variável 'base', criada anteriormente

    printf("Digite o valor da altura do triangulo em cm: "); // Pedindo para o usuário digitar o valor da altura do triangulo em centimetros
    scanf("%f", &altura); // Armazenando o valor digitado pelo usuario na variavel 'altura', criada anteriormente

    area = base * altura / 2; // Armazenando dentro da variavel 'area' a operação matematica que resulta na area dos triangulo

    printf("A area do triangulo eh: %.3f", area); // Mostrando para o usuario o valor da area do triangulo, segundos os valores digitados pelo proprio usuario

    return 0; // Retornando o valor 0 para a função principal do tipo main


}

// É possível criar uma "calculadora" para qualquer tipo de problema matematico, basta ter paciencia para criar um algoritmo que resolva o problema em questao.