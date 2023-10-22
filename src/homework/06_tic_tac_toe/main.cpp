#include "tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cin;using std::cout;using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter the first player: ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<<"Enter y to play again, enter anything else to exit:  ";
		cin>>user_choice;

	}while(user_choice == 'y'|| user_choice == 'Y');

	return 0;
}