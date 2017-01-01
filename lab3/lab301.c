/**SILNIA**/

#include <stdio.h>

int main()
{
    int x;
    int s = 1;
    printf("Podaj x:");
    scanf("%d", &x);
    
    for(int i = 1; i <= x; i++)
    {
        s *= i;
    }
    printf("x!: %d", s);
    return 0;
}