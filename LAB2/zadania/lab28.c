/*PROGRAM WCZYTUJE DWIE (nie trzy, jak w zadaniu) LICZBY I JE UPORZĄDKOWUJE OD NAJMNIEJSZEJ DO NAJWIĘKSZEJ
    użycie pomocniczej zmiennej! */
    
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Podaj pierwszą liczbę:");
    scanf("%d", &a);
    printf("Podaj drugą liczbę:");
    scanf("%d", &b);
    
    if(a > b)
    {
        c = a;
        a = b;
        b = c;
    }
    
    printf("%d, %d", a , b);
    return 0;
}