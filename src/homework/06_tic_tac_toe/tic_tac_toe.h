//h
#include <string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int peg_count):pegs(peg_count*peg_count," "){};
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_next_player() const{return player;}
    void display_board() const;
    std::string get_winner();

protected:
    std::vector<std::string> pegs;
    virtual bool check_board_full();
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private: 
    std::string player;
    void clear_board();
    void set_next_player();
    void set_winner(std::string play);
    std::string winner;
};


#endif