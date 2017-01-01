/*WCZYTAJ CIĄG ZNAKÓW RÓŻNEGO TYPU*/

#include <stdio.h>

int main()
{
    int a, b;
    char z;
    printf("Wpisz wyrażenie:");
    scanf("%d%c%d", &a, &z, &b);
    
    switch(z)
    {
        case '+':
        {
            printf("Wynik: %d\n", a+b);
            break;
        }
        case '-':
        {
            printf("Wynik: %d\n", a-b);
            break;
        }
        case '*':
        {
            printf("Wynik: %d\n", a*b);
            break;
        }
        case '/':
        {
            printf("Wynik: %d\n", a/b);
            break;
        }
        default:
        {
            printf("Błąd\n");
            break;
        }
    }
}