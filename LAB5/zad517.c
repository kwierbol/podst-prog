#include <stdio.h>

int a(int m, int n)
{
    if(m == 1)
    {
        return n+1;
    }
    else if(m > 0 && n == 0)
    {
        return a(m-1, 1);
    }
    else if(m > 0 && n > 0)
    {
        return a(m-1, a(m, n-1));
    }
}

int main()
{
    int m, n;
    printf("Podaj dwie liczby:");
    scanf("%d, %d", &m, &n);
    printf("Wynik: %d", a(m, n));
    return 0;
}