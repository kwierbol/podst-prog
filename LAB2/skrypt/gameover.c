#include <stdio.h>

#define YOU 0
#define ME 1

int main(int argc, char **argv)
{
    int gameIsOver = 0;
    int playerToMove = YOU;
    
    if(gameIsOver)
    {
        if(playerToMove == YOU)
        {
            printf("Your move\n");
        }
        else
        {
            printf("My move\n");
        }
    }
    return 0;
}