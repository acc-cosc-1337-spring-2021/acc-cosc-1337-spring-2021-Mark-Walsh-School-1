#include <iostream>
#include "tic_tac_toe.h"
#include <vector>
using namespace std;

void form(string text, int times, bool newLine);
void title(string title, string a, string b);
int main() 
{
	bool run = true;
	form("\n",30,true);
	title("TIC TAC TOE ", "\xB0", "\xB2");
	
	TicTacToe game;
	

	string choice;
	bool inputValid;
	string menuInput;
	do{ 			//game loop
		do{				//main menu loop

	

			for(int i = 0; i < 3; i++){
				cout << "[N]ew game ";
				cout << "[Q]uit";  
				cin >> menuInput;
				if(menuInput == "N" || menuInput == "n"){
					i = 5;
				}	
				else if(menuInput == "Q" || menuInput == "q"){
					return 0;
				}
			}

			cout << "Player 1, choose either X or O >> ";
			cin >> choice;
			
			if (choice == "X" || choice == "O"){
				inputValid = true;
			}
			else if (choice == "x"){
				choice = "X";
				inputValid = true;
			}
			else if (choice == "o"){
				choice = "O";
				inputValid = true;
			}
			else{
				inputValid = false;
			}


		}
		while(inputValid == false);
		game.start_game(choice);


		int pos;

		form("\n",30,true);
		game.display_board();
		while (game.game_over() == false){
			inputValid = false;
			
			while(inputValid==false){
				cout << "\n\nPlayer " << game.get_player() << " which square would you like to take? (1-9) ";
				cin >> pos;
				int posNum = (int)pos;
				if(posNum >= 1 && posNum <= 10){
					
			
					inputValid = true;
				}
				else{
					
					inputValid = false;
				}
			}

			game.mark_board(pos);
			form("\n",30,true);
			game.display_board();
		}

		
		

	}while(run);




	return 0;
}

void title(string text, string a, string b){

	
	string A[13];
	string B[13];
	string tempA;
	string tempB;
	string letter[8];
	for (int i = 0; i < 13; i++ ){
		tempA.erase();
		tempB.erase();
		for (int j = 1; j < i+1; j++){

			tempA = tempA + a;
			tempB = tempB + b;

		}
		A[i].append(tempA);
		B[i].append(tempB);


	}
	


	for(unsigned int i = 0; i < text.size(); i++){

		switch (text[i]){

			case 'T':
				tempA.erase();
				tempA = letter[0] + A[3] + B[10];
				letter[0] = tempA;
				tempA.erase();
				tempA = letter[1] + A[3] + B[10];
				letter[1] = tempA;
				tempA.erase();
				tempA = letter[2] + A[7] + B[2] + A[4];
				letter[2] = tempA;
				
				tempA.erase();
				tempA = letter[3] + A[7] + B[2] + A[4];
				letter[3] = tempA;
				tempA.erase();
				tempA = letter[4] + A[7] + B[2] + A[4];
				letter[4] = tempA;
				tempA.erase();
				tempA = letter[5] + A[7] + B[2] + A[4];
				letter[5] = tempA;
				tempA.erase();
				tempA = letter[6] + A[7] + B[2] + A[4];
				letter[6] = tempA;
				tempA.erase();
				tempA = letter[7] + A[7] + B[2] + A[4];
				letter[7] = tempA;

				break;

			case 'I':

				tempA.erase();
				tempA = letter[0] + A[3] + B[10];
				letter[0] = tempA;
				tempA.erase();
				tempA = letter[1] + A[3] + B[10];
				letter[1] = tempA;
				tempA.erase();
				tempA = letter[2] + A[7] + B[2] + A[4];
				letter[2] = tempA;
				
				tempA.erase();
				tempA = letter[3] + A[7] + B[2] + A[4];
				letter[3] = tempA;
				tempA.erase();
				tempA = letter[4] + A[7] + B[2] + A[4];
				letter[4] = tempA;
				tempA.erase();
				tempA = letter[5] + A[7] + B[2] + A[4];
				letter[5] = tempA;
				tempA.erase();
				tempA = letter[6] + A[3] + B[10];
				letter[6] = tempA;
				tempA.erase();
				tempA = letter[7] + A[3] + B[10];
				letter[7] = tempA;
				break;
			
			case 'C':

				tempA.erase();
				tempA = letter[0] + A[3] + B[10];
				letter[0] = tempA;
				tempA.erase();
				tempA = letter[1] + A[3] + B[10];
				letter[1] = tempA;
				tempA.erase();
				tempA = letter[2] + A[3] + B[2] + A[8];
				letter[2] = tempA;
				
				tempA.erase();
				tempA = letter[3] + A[3] + B[2] + A[8];
				letter[3] = tempA;
				tempA.erase();
				tempA = letter[4] + A[3] + B[2] + A[8];
				letter[4] = tempA;
				tempA.erase();
				tempA = letter[5] + A[3] + B[2] + A[8];
				letter[5] = tempA;
				tempA.erase();
				tempA = letter[6] + A[3] + B[10];
				letter[6] = tempA;
				tempA.erase();
				tempA = letter[7] + A[3] + B[10];
				letter[7] = tempA;
				break;


			case 'A':

				tempA.erase();
				tempA = letter[0] + A[5] + B[6] + A[2];
				letter[0] = tempA;
				tempA.erase();
				tempA = letter[1] + A[4] + B[8] + A[1];
				letter[1] = tempA;
				tempA.erase();
				tempA = letter[2] + A[3] + B[2] + A[6] + B[2];
				letter[2] = tempA;
				
				tempA.erase();
				tempA = letter[3] + A[3] + B[10];
				letter[3] = tempA;
				tempA.erase();
				tempA = letter[4] + A[3] + B[10];
				letter[4] = tempA;
				tempA.erase();
				tempA = letter[5] + A[3] + B[2] + A[6] + B[2];
				letter[5] = tempA;
				tempA.erase();
				tempA = letter[6] + A[3] + B[2] + A[6] + B[2];
				letter[6] = tempA;
				tempA.erase();
				tempA = letter[7] + A[3] + B[2] + A[6] + B[2];
				letter[7] = tempA;
				break;

			case 'O':

				tempA.erase();
				tempA = letter[0] + A[5] + B[6] + A[2];
				letter[0] = tempA;
				tempA.erase();
				tempA = letter[1] + A[4] + B[8] + A[1];
				letter[1] = tempA;
				tempA.erase();
				tempA = letter[2] + A[3] + B[2] + A[6] + B[2];
				letter[2] = tempA;
				
				tempA.erase();
				tempA = letter[3] + A[3] + B[2] + A[6] + B[2];
				letter[3] = tempA;
				tempA.erase();
				tempA = letter[4] + A[3] + B[2] + A[6] + B[2];
				letter[4] = tempA;
				tempA.erase();
				tempA = letter[5] + A[3] + B[2] + A[6] + B[2];
				letter[5] = tempA;
				tempA.erase();
				tempA = letter[6] + A[4] + B[8] + A[1];
				letter[6] = tempA;
				tempA.erase();
				tempA = letter[7] + A[5] + B[6] + A[2];
				letter[7] = tempA;
				break;

			case 'E':
				tempA.erase();
				tempA = letter[0] + A[3] + B[10];
				letter[0] = tempA;
				tempA.erase();
				tempA = letter[1] + A[3] + B[10];
				letter[1] = tempA;
				tempA.erase();
				tempA = letter[2] + A[3] + B[2] + A[8];
				letter[2] = tempA;
				
				tempA.erase();
				tempA = letter[3] + A[3] + B[10];
				letter[3] = tempA;
				tempA.erase();
				tempA = letter[4] + A[3] + B[10];
				letter[4] = tempA;
				tempA.erase();
				tempA = letter[5] + A[3] + B[2] + A[8];
				letter[5] = tempA;
				tempA.erase();
				tempA = letter[6] + A[3] + B[10];
				letter[6] = tempA;
				tempA.erase();
				tempA = letter[7] + A[3] + B[10];
				letter[7] = tempA;

				break;

			case ' ':
				for (int i = 0; i < 8; i++){
					tempA.erase();
					tempA = letter[i] + A[3];
					letter[i] = tempA;
				}

			
		}



	}

	

	for (int i = 0; i < 8; i++){
		cout << letter[i] << "\n";
	}
	cout << "\n\n\n";
}

void form(string text, int times, bool newLine){
	for (int i = 0; i < times; i++){
		cout << text;
	}
	if (newLine){
		cout << "\n";
	}
}

	
	


	





