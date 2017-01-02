#include <stdio.h>

int n(int b)
{
    if(b == 0)
        return 0;
    if(b == 1)
        return 6;
    if(b > 1)
        return 3+n(b-1);
}

int main()
{
    int b;
    printf("Podaj liczbę:");
    scanf("%d", &b);
    printf("Wartość funkcji: %d\n", n(b));
    return 0;
}