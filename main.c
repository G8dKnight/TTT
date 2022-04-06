#include"TTT.h"



int main()
{
    char board[3][3] ={
                        -1, -1, -1,
                        -1, -1, -1,
                        -1, -1, -1
                      };



    int game_mode , gamestatus ;


    while(1)
    {
        //....Display menu....
        system("clear");
        menu();
        scanf("%d",&game_mode);

        switch (game_mode)
        {
            case SINGLE_PLAYER:
                single_player(board);
                break;
                
            case DOUBLE_PLAYER:
                while(1)
                {
                    gamestatus = double_player(board);
                    if(gamestatus == NEW_GAME)
                    {
                        continue;
                    }
                    else if( gamestatus == MAIN_MENU)
                    {
                        break;
                    }
                    else if(gamestatus == EXIT)
                    {
                        exit(0);
                    }
                }
                break;

            case EXIT:
                exit(1);
            default:
                break;
        }
    }

}


