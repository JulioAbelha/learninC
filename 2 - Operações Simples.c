#include <stdio.h> // Biblioteca para 'printf' e 'scanf'

int main() // Função Principal
{
    int idade1 = 10; // Variáveis
    int idade2 = 20;
    int idade3 = 30;
    int idade4 = 40;
    int idadeSoma;

    idadeSoma = idade1 * (idade2 + idade3 + idade4); // Para fazer contas, todas as regras de prioridade de aritmética normal também se aplicam aqui, use e abuse de parênteses, e cada exercício merece atenção 

    printf("A soma eh %i", idadeSoma); // Função printf

    return 0; // Retornado um valor 0 para a função principal de tipo 'int'
}