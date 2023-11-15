//cpp
#include "tic_tac_toe_manager.h"
using std::cout;

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}   

void TicTacToeManager::get_winner_total()
{
    cout<<"# of wins for O: " << o_win << "\n";
    cout<<"# of wins for X: " << x_win << "\n";
    cout<<"# of ties: " << ties << "\n";
}

void TicTacToeManager::display_all_games()
{
    for(long unsigned int i = 0; i<games.size(); i++)
    {
        games[i].display_board();
        cout<<"\n";
    }
    get_winner_total();
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_win++;
    }

    if (winner == "O")
    {
        o_win++;
    }

    if (winner == "C")
    {
        ties++;
    }   
}