#include"TTT.h" 


GAME_MODE  double_player(char board[3][3])
{

    int                 position, game_status;
    unsigned char       turns = 0;    
    move                pos ;
    char                error_bufffer[100];


    memset(board,-1 , 9);                            // making sure board is empty
    memset(error_bufffer ,0,sizeof(error_bufffer));  // making sure  the buffer is empty


    while(turns < 9)
    {
        //refreshes the board for every iteration
        system("clear");
        display_board(board);

        
        //PRINTS ERROR MESSAGE FOR CONDITONS LIKE POS_TAKEN , INV_POSITION.....
        printf(RED"%s"RES, error_bufffer);
        memset(error_bufffer ,'\0',sizeof(error_bufffer));  // clear the buffer after printing


        //Every even move is move for X and every odd move is for O
        //first move starts at 0
        printf("Enter move for %s : ",(turns % 2 == 0 )? "X":"O");
        scanf("%d", &position);

    
        if(numpad_coordinates(position ,&pos) == INV_POSITION)
        {
            sprintf(error_bufffer,"Invalid position . Positions are mapped for numbers (1-9)\n");
            continue;
        }

        if(board[pos.x][pos.y] == -1)
        {
            //assigns 1 for player X and 0 for O
            board[pos.x][pos.y] = (turns & 1)? 0 : 1;
            turns++;
        }

        else
        {
            sprintf(error_bufffer,"Position %d is taken\n", position);
            
        }

        game_status = evaluate(board);

        if(game_status == 0 && turns <= 8)
        {
            continue;
        }
        else if((game_status == 0 && turns >= 8 ) || game_status == X_WON || game_status == O_WON)
        {
            return(game_over(game_status, board));
             
        }
    }
}