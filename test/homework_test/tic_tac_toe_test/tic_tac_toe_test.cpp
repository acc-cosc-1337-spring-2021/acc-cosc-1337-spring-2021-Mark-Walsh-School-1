#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify TicTacToe.game_over"){

	TicTacToe game;
	game.start_game("X");
	for (int i = 1; i < 10; i++){
		game.mark_board(i);
	}

	REQUIRE(game.game_over() == true);

}
