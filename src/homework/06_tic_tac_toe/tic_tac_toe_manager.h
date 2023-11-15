//h
#include "tic_tac_toe.h"
#include <vector>
#include<iostream>

using std::vector; 

#ifndef tic_tac_toe_manager
#define tic_tac_toe_manager

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    void get_winner_total();
    void display_all_games();

private:
    vector<TicTacToe> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(std::string winner);
};

#endif