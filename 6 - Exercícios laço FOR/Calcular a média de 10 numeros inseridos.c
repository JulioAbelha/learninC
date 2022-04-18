#include <stdio.h>

int main()
{
    int contador, soma=0, n; // Lembrar de iniciar os valores com 0.
    float media;

    for(contador = 1 ; contador <= 10 ; contador++){
        printf("Insria o %i numero: ", contador);
        scanf("%i", &n);

        soma = soma + n;
    }
    
    media = soma/10.0;

    printf("A soma disso tudo eh: %i\n", soma);
    printf("A media disso tudo eh: %f", media);
}