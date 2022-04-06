#include"TTT.h"


status numpad_coordinates(int position ,move *pos)
{
    switch(position)
    {
        case 1:
            pos->x = 2; 
            pos->y = 0;
            break;
            
        case 2:
            pos->x = 2;                 //------------------------  
            pos->y = 1;                 //  7   |    8   |    9  |  
            break;                      // -----------------------                      
        case 3:                         //  4   |    5   |    6  |  
            pos->x = 2;                 //------------------------
            pos->y = 2;                 //  1   |    2   |    3  |   
            break;                      //------------------------
        case 4:
            pos->x = 1; 
            pos->y = 0;
            break;
        case 5:
            pos->x = 1; 
            pos->y = 1;
            break;
        case 6:
            pos->x = 1; 
            pos->y = 2;
            break;
        case 7:
            pos->x = 0; 
            pos->y = 0;
            break;
        case 8:
            pos->x = 0; 
            pos->y = 1;
            break;
        case 9:
            pos->x = 0; 
            pos->y = 2;
            break;

        default:
            return INV_POSITION;
    
    }
    
        return SUCCESS;

}