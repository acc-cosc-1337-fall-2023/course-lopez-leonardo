#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing TicTacToe and Manager class") 
{
	TicTacToe game;
	TicTacToeManager manager;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(!game.game_over());
	game.mark_board(2);
	REQUIRE(!game.game_over());
	game.mark_board(3);
	REQUIRE(!game.game_over());
	game.mark_board(4);
	REQUIRE(!game.game_over());
	game.mark_board(5);
	REQUIRE(!game.game_over());
	game.mark_board(6);
	REQUIRE(!game.game_over());
	game.mark_board(7);
	REQUIRE(game.game_over());
	REQUIRE(game.get_winner() == "X");
}

