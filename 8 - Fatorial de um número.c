#include <stdio.h>

int main()
{
    int contador, numeroInput;
    long int fatorial = 1;       // Não deu certo

    printf("Digite um numero qualquer: ");
    scanf("%i", &numeroInput);

    for(contador = numeroInput ; contador >= 1 ; contador--){
        printf("%i . ", numeroInput);
        
            fatorial = fatorial * numeroInput;

        
            numeroInput--;        
        
        if(contador == 1){
        printf("= %li",fatorial);
    }
    }

    return 0;

}