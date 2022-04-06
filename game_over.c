#include"TTT.h"
 
 

GAME_MODE game_over(int status, char board[3][3])
{
    system("clear");
    display_board(board);

    printf("\tGAME OVER\n");

    switch (status)
    {
    case X_WON:
        printf("X won\n");
        break;

    case O_WON:
        printf("O won\n");
        break;

    case DRAW:
        printf("Game is draw\n");

    default:
        break;
    }

    printf("  4. New Game\n"
           "  5. Reuturn to main menu\n"
           "  3. Exit\n"
           "Your option : "
           );
    int gamemode ;
    scanf("%d",&gamemode);

    return gamemode;    
}
