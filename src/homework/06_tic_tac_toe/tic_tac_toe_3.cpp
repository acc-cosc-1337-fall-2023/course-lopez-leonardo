#include "tic_tac_toe_3.h"

bool TicTacToe::check_column_win()
{
    if(player == pegs[0] && player == pegs[3] && player == pegs[6])
    {
        return true;
    }
    if(player == pegs[1] && player == pegs[4] && player == pegs[7])
    {
        return true;
    }
    if(player == pegs[2] && player == pegs[5] && player == pegs[8])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if(player == pegs[0] && player == pegs[1] && player == pegs[2])
    {
        return true;
    }
    if(player == pegs[3] && player == pegs[4] && player == pegs[5])
    {
        return true;
    }
    if(player == pegs[6] && player == pegs[7] && player == pegs[8])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(player == pegs[0] && player == pegs[4] && player == pegs[8])
    {
        return true;
    }
    if(player == pegs[2] && player == pegs[4] && player == pegs[6])
    {
        return true;
    }
    return false;
}