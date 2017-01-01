/**program wypisuje liczby od 1 do x**/

#include <stdio.h>

int main()
{
    int x;
    printf("podaj liczbę całkowitą dodatnią:");
    scanf("%d", &x);
    for(int a = 1; a <= x; a++)
    {
        printf("%d\n", a);
    }
}