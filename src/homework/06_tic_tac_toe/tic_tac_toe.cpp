//cpp
#include "tic_tac_toe.h"
#include<iostream>

bool TicTacToe::game_over()
{
    if(TicTacToe::check_column_win() || TicTacToe::check_row_win() || TicTacToe::check_diagonal_win())
    {
        set_winner(TicTacToe:: player);
        std::cout<<"Winner is: "<<get_winner()<<"\n";
        return true;
    }
    if(TicTacToe::check_board_full())
    {
        set_winner("C");
        std::cout<<"Winner is: "<<get_winner()<<"\n";
        return true;
    }
    return false;
    
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    if(!game_over())
    {
        set_next_player();
    }
}

void TicTacToe::display_board() const
{
    for(long unsigned int i = 0;i < pegs.size();i+=3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

std::string TicTacToe::get_winner()
{
    return winner;
}

//private functions
void TicTacToe::clear_board()
{
    for(auto& peg:pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0;i<pegs.size();i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::set_winner(std::string play)
{
    winner = play;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}