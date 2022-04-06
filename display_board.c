#include"TTT.h"

void display_board(char board[3][3])
{
    printf("\n");
    for(int i = 0 ; i  < 3 ; i++ )
    {

        printf("\t");
        for(int j = 0 ;j < 3 ; j++ )
        {

            if(board[i][j] == -1 )
            {
                printf("   ");
            }
            else
            {
                (board[i][j] != 1)?printf(YEL" 0 "RES):printf(MAG" X "RES);
                        
            }
            if(j != 2)
            {
                printf(GRN"|"RES);
            }
        } 
        if(i != 2)
        {
            printf(GRN"\n\t-----------\n"RES);
        }
        else
        {
            printf("\n\n");

        }
    }
}

