#include <stdio.h> // Incluir a biblioteca que permite usar as funções 'printf' e 'scanf'

int main () // Função principal no tipo int
{
    int minhaIdade = 50; // Criando variáveis para chamá-las depois
    int maeIdade = 120; // ''
    int paiIdade = 150; // ''

    printf("A minha idade eh %i\nA idade da minha mae eh %i\nA idade do meu pai eh %i" // Parte do código 'printf' que irá chamar as variáveis
    , minhaIdade, maeIdade, paiIdade); // Segunda parte do código 'printf' que eu especifíco a ordem em que os valores alocados nas variáveis criadas devem aparecer

    return 0; // Retornando um valor para a função principal, tendo em vista que ela é do tipo 'int'.

}