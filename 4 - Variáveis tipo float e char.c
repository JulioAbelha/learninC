#include <stdio.h> // Importando as funções 'printf' e 'scanf'

int main() // Função principal
{
    int numero = 2; // Criando variáveis dos 3 tipos principais
    float decimal = 20.5;
    char caractere = 'f'; // Na hora de criar uma variavel do tipo char, usar Apóstrofo invés de aspas, caso contrário, não dará certo

    printf("Numero: %i\n", numero); // %i para integer
    printf("Decimal: %f\n", decimal); // %f para float
    printf("Letra: %c\n", caractere); // %c para char

    return 0; // Retornando 0 para a função principal do tipo Int

}