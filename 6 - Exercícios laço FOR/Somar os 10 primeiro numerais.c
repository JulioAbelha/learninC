#include <stdio.h>

int main()
{
    int contador, soma = 0;
    float media;

    for(contador = 1 ; contador <= 10; contador++){
        printf("%i ", contador);
          soma = soma + contador;

    }
    
    media = soma /10.0;

    
    printf("\n%i", soma);
    printf("\n%.2f", media);
    return 0;
}