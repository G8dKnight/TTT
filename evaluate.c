#include"TTT.h"


status evaluate(char b[3][3])

{
    // Checking for Rows for X or O victory.
    for (int row = 0; row<3; row++)
    {
        if (b[row][0] == b[row][1] &&
            b[row][1] == b[row][2])
        {
            if (b[row][0] == X)
                return X_WON;
            else if (b[row][0] == O)
                return O_WON;
        }
    }
 
    // Checking for Columns for X or O victory.
    for (int col = 0; col<3; col++)
    {
        if (b[0][col] == b[1][col] &&
            b[1][col] == b[2][col])
        {
            if (b[0][col] == X)
                return X_WON;
 
            else if (b[0][col] == O)
                return O_WON;
        }
    }
 
    // Checking for Diagonals for X or O victory.
    if (b[0][0] == b[1][1] && b[1][1] == b[2][2])
    {
        if (b[0][0] == X)
            return X_WON;
        else if (b[0][0] == O)
            return O_WON;
    }
 
    if (b[0][2] == b[1][1] && b[1][1] == b[2][0])
    {
        if (b[0][2] == X)
            return X_WON;
        else if (b[0][2] == O)
            return O_WON;
    }
 
    // Else if none of them have won then return 0
    return 0;
}