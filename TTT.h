#ifndef TTT_H
#define TTT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include"colors.h"


#define O 0
#define X 1

typedef enum STATUS
{
    DRAW,
    SUCCESS,
    FAILURE,
    POS_TAKEN,
    GAME_OVER ,
    INV_POSITION,
    X_WON = +10,
    O_WON = -10 
}status;




typedef struct 
{
    int x , y;
}move;

typedef enum {
    
    
    SINGLE_PLAYER = 1,
    DOUBLE_PLAYER ,  
    EXIT ,
    NEW_GAME,
    MAIN_MENU 
    
}GAME_MODE;





void menu();
GAME_MODE single_player(char board[3][3]);
GAME_MODE double_player(char board[3][3]);
void display_board(char board[3][3]);
status numpad_coordinates(int position , move* pos);
GAME_MODE game_over( int status , char board[3][3]);

status evaluate(char b[3][3]);








#endif