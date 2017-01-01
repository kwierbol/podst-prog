/*WARTOŚĆ BEZWZGLĘDNA LICZBY*/

#include <stdio.h>

int main()
{
    int x;
    printf("Podaj liczbę:");
    scanf("%d", &x);
    
    if(x >= 0)
    {
        printf("Wartość bezwzględna: %d\n", x);
    }
    else
    {
        x = x*(-1);
        printf("Wartość bezwględna: %d\n", x);
    }
    
    return 0;
}
