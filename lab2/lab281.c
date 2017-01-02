/*PROGRAM WCZYTUJE TRZY LICZBY I JE UPORZĄDKOWUJE OD NAJMNIEJSZEJ DO NAJWIĘKSZEJ
    użycie pomocniczej zmiennej! */
    
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Podaj pierwszą liczbę:");
    scanf("%d", &a);
    printf("Podaj drugą liczbę:");
    scanf("%d", &b);
    printf("Podaj trzecią liczbę:");
    scanf("%d", &c);
    
    if(a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if(b > c)
    {
        d = b;
        b = c;
        c = d;
    }
    if(a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    
    printf("%d, %d, %d", a , b, c);
    return 0;
}