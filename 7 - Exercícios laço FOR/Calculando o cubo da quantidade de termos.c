#include <stdio.h>

int main()
{
    int contador, n;

    printf("Digite um termo entro 0 e 11: ");
    scanf("%i", &n);

    for(contador = 1 ; contador <= n ; contador++){
        printf("O termo eh: %i, e seu cubo eh: %i\n", contador, (contador*contador*contador));
    }

    return 0;
}