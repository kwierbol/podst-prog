#include <stdio.h>

int typLiczby(int n)
{
    int d = 2;
    if(n < 2)
    {
        return 0;
    }
   
    while(d < n)
    {
        if(n%d==0)
        {
            return 0;
        }
    d++;
    }
    
    return 1;
}

int main()
{
    int n;
    printf("Podaj liczbę:");
    scanf("%d", &n);
    int typ = typLiczby(n);
    
    if(typ == 0)
    {
        printf("Liczba nie jest pierwsza\n");
    }
    else if(typ == 1)
    {
        printf("Liczba jest pierwsza\n");
    }
    
}