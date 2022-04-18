#include <stdio.h>

int main()
{
    int contador;
    float numInput;

    printf("Digite alguma valor: ");
    scanf("%f", &numInput);

    printf("\n");

    for(contador = 1 ; contador <= 10 ; contador++){
        printf("%.2f x %i = %.2f\n",numInput, contador, (numInput*contador) );
    }
}