#include <stdio.h>

int main()
{
    int n, m, o;
    printf("Podaj pierwsza liczbe:");
    scanf("%d", &n);
    printf("Podaj druga liczbe:");
    scanf("%d", &m);
    
    while(n != m)
    {
        if(n > m)
        {
            n = n - m;
        }
        
        else if(n < m)
        {
            o = n;
            n = m;
            m = o;
            n = n - m;
        }
    }
    printf("%d", n);
}