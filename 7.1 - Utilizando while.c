#include <stdio.h>

int main()
{
    int x = 10;
    int y = 2;

    while(x >= y){
        printf("x = %i e y = %i\n", x, y);
        x--;
        y++;
    }
}