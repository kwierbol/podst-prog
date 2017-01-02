#include <stdio.h>

int c(int k, int n)
{
    if(k == 0)
        return n;
    if((c(k-1, n))%2 == 0)
        return ((c(k-1, n))/2.0);
    if((c(k-1, n))%2 != 0)
        return 3*c(k-1, n)+1;
}

int main()
{
    int k, n;
    printf("Podaj liczby:");
    scanf("%d, %d", &k, &n);
    printf("Wynik: %f", c(k, n));
    return 0;
}