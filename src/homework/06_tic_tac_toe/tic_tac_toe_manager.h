//h
#include "tic_tac_toe.h"
#include<vector>
#include<iostream>
#include<memory>
using std::unique_ptr;

using std::vector; 

#ifndef tic_tac_toe_manager
#define tic_tac_toe_manager

class TicTacToeManager
{
public:
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total();
    void display_all_games();

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(std::string winner);
};

#endif