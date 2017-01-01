/*SPRAWDŹ CZY LICZBA JEST PARZYSTA*/

#include <stdio.h>

int main()
{
    int x;
    printf("Wprowadź liczbę:");
    scanf("%d", &x);
    
    if((x%2) == 0)
    {
        printf("Liczba parzysta\n");
    }
    else
    {
        printf("Liczba nieparzysta\n");
    }
    
    return 0;
}