#include <stdio.h>

int main()
{
    int contador,n,soma = 0;

    printf("Digite um valor entre 0 e 11: ");
    scanf("%i", &n);
    
    for(contador = 1 ; contador <= n; contador++){
        printf("%i ", contador);
          soma = soma + contador;

    }
    
    printf("\n%i", soma);

    return 0;
}