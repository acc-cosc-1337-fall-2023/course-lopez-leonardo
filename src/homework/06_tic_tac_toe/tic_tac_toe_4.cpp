#include "tic_tac_toe_4.h"

bool TicTacToe::check_column_win()
{
    if(player == pegs[0] && player == pegs[4] && player == pegs[8] && player == pegs[12])
    {
        return true;
    }
    if(player == pegs[1] && player == pegs[5] && player == pegs[9] && player == pegs[13])
    {
        return true;
    }
    if(player == pegs[2] && player == pegs[6] && player == pegs[10] && player == pegs[14])
    {
        return true;
    }
    if(player == pegs[3] && player == pegs[7] && player == pegs[11] && player == pegs[15])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if(player == pegs[0] && player == pegs[1] && player == pegs[2] && player == pegs[3])
    {
        return true;
    }
    if(player == pegs[4] && player == pegs[5] && player == pegs[6] && player == pegs[7])
    {
        return true;
    }
    if(player == pegs[8] && player == pegs[9] && player == pegs[10] && player == pegs[11])
    {
        return true;
    }
    if(player == pegs[12] && player == pegs[13] && player == pegs[14] && player == pegs[15])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(player == pegs[0] && player == pegs[5] && player == pegs[10] && player == pegs[15])
    {
        return true;
    }
    if(player == pegs[3] && player == pegs[6] && player == pegs[9] && player == pegs[11])
    {
        return true;
    }
    return false;
}