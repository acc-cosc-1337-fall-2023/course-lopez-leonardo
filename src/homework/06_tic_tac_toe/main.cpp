#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cin;using std::cout;using std::string;

int main() 
{
	TicTacToe game;
	TicTacToeManager gameManager;
	string player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter X or O to start: ";
		cin>>player;

		game.start_game(player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}
		gameManager.save_game(game);
		gameManager.get_winner_total();

		cout<<"Enter y to play again, enter anything else to exit:  ";
		cin>>user_choice;

	}while(user_choice == 'y'|| user_choice == 'Y');
	
	gameManager.display_all_games();

	return 0;
}