#include <iostream>
#include "tic_tac_toe.h"
using namespace std;

void form(string text, int times);

int main() 
{
	
	TicTacToe game;
	form("\n",50);
	form("-",50);
	form(" -",25);
	form("  -  ",10);
	form("    -",10);
	cout << endl << "                  Tic Tac Toe" << endl << endl;
	form("    -",10);
	form("  -  ",10);
	form(" -",25);
	form("-",50);
	form("\n",6);

	string choice;
	bool inputValid;

	do{
		cout << "Player 1, choose either X or O >> ";
		cin >> choice;
		
		if (choice == "X" || choice == "O"){
			inputValid = true;
		}
		else{
			inputValid = false;
		}


	}
	while(inputValid == false);
	game.start_game(choice);


	int pos;

	form("\n", 30);
	game.display_board();
	while (game.game_over() == false){

		
		cout << "\n\nPlayer " << game.get_player() << " which square would you like to take? (1-9) ";
		cin >> pos;

		game.mark_board(pos);
		form("\n", 30);
		game.display_board();
		
		

	}









	return 0;
}

void form(string text, int times){

	for (int i = 0; i < times + 1; i++){

		cout << text;

	}
	cout << endl;

}