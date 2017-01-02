#include <stdio.h>

int sumaNieparzystych(int n)
{
    int a, i;
    for(i = n; i <= 2*n; i++)
    {
        if(!(i%2 == 0))
        {
            a += i;
        }
    }
    return a;
}

int main()
{
    int n;
    printf("Podaj liczbę:");
    scanf("%d", &n);
    printf("Suma liczb nieparzystych z przedziału <%d, %d>: %d", n, 2*n, sumaNieparzystych(n));
    return 0;
}
