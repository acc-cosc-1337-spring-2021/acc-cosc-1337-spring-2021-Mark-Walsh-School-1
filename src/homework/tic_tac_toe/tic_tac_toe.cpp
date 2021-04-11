#include "tic_tac_toe.h"



void TicTacToe::start_game(std::string first_player){

    player = first_player;
    clear_board();
    

}

void TicTacToe::mark_board(int position){

    pegs[position-1] = get_player();
    set_next_player();
   

}

std::string TicTacToe::get_player() const{
    return player;
}

void TicTacToe::display_board() const{

    
    std::cout << "\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\xDC\n";
	std::cout << "\xDB     \xBA     \xBA     \xDB\n\xDB";
	
    for (int i = 0; i < 9; i++){

        if((i+1)%3 != 0){
            std::cout << "  " << pegs[i] << "  \xBA";
        }
        else{

            std::cout << "  " << pegs[i] << "  \xDB" << std::endl; 
            if (i+1 != 9){
                std::cout << "\xDB     \xBA     \xBA     \xDB\n\xDB\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xDB\n\xDB     \xBA     \xBA     \xDB\n\xDB";
            }
            else{
                std::cout << "\xDB     \xBA     \xBA     \xDB\n\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\n";
            }
        } 
        
    }
    

}

void TicTacToe::set_next_player(){

    if ( player == "X"){
        player = "O";
    }
    else{
        player = "X";
    }
}

bool TicTacToe::check_board_full(){

    for (int i = 0; i < 9; i++){
       
        if (pegs[i] == " "){
            
            
            
            return false;
        }
    }

    
    return true;

}

void TicTacToe::clear_board(){
    pegs = {" ", " ", " "," ", " ", " "," ", " ", " "};

}

bool TicTacToe::game_over(){

    if(TicTacToe::check_row_win()||TicTacToe::check_column_win()||TicTacToe::check_diagonal_win()){

        
        TicTacToe::set_winner();
        std:: cout << "Player " << get_winner() << " has won the game!\n\n";
        return true;
    }
    else if(check_board_full()==true){
        winner = "C";
        std::cout << "The game has ended in a tie!\n\n";
        return true;
        
    }


    

    return check_board_full();

}

bool TicTacToe::check_row_win(){
    
    if(pegs[0] != " "){

        if(pegs[0] == pegs[1] && pegs[0] == pegs[2]){
            return true;
        }

    }
    if(pegs[3] != " "){

    
        if(pegs[3] == pegs[4] && pegs[3] == pegs[5]){
          return true;
        }
    
    }

    if(pegs[6] != " "){
       
        if((pegs[6] == pegs[7]) && (pegs[6] == pegs[8])){
            return true;
        }
    }

    
    return false;
}

bool TicTacToe::check_column_win(){

    if(pegs[0] != " "){
        if(pegs[0] == pegs[3] && pegs[0] == pegs[6]){
            return true;
        }

    }
    if(pegs[1]!=" "){
        if(pegs[1] == pegs[4] && pegs[1] == pegs[7]){
            return true;
        }

    }
    if(pegs[2]!=" "){
        if(pegs[2] == pegs[5] && pegs[2] == pegs[8]){
            return true;
        }
    }
  
    return false;

}

bool TicTacToe::check_diagonal_win(){

    if(pegs[0]!=" "){
        if(pegs[0] == pegs[4] && pegs[0] == pegs[8]){
            return true;
        }
    }
    if(pegs[2] != " "){
        if(pegs[2] == pegs[4] && pegs[2] == pegs[6]){
            return true;
        }
    }
    return false;

}

void TicTacToe::set_winner(){
    
    if(player == "X"){
        winner = "O";
    }
    else{
        winner = "X";
    }
    

}

std::string TicTacToe::get_winner(){

    return winner;

}
