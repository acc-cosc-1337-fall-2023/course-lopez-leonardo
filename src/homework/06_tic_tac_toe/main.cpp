#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>
#include<memory>

using std::make_unique; using std::unique_ptr;
using std::cin;using std::cout;using std::string;

int main() 
{
	unique_ptr<TicTacToe> game;
	TicTacToeManager gameManager;
	string player;
	char user_choice = 'y';
	int game_choice = 0;

	do
	{
		cout<<"Enter '3' for 3x3 tic tac toe and '4' for 4x4: ";
		cin>>game_choice;
		cout<<"Enter 'X' or 'O' to start: ";
		cin>>player;

		if(game_choice == 3)
		{
			game = make_unique<TicTacToe3>();
		}else if(game_choice == 4){
			game = make_unique<TicTacToe4>();
		}
		game -> start_game(player);

		int position;

		while(!game -> game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game -> mark_board(position);
			game -> display_board();
		}

		gameManager.save_game(game);
		gameManager.get_winner_total();

		cout<<"Enter y to play again, enter anything else to exit:  ";
		cin>>user_choice;
	}while(user_choice == 'y'|| user_choice == 'Y');
	
	gameManager.display_all_games();

	return 0;
}