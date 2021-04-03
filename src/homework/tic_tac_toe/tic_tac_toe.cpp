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

    for (int i = 0; i < 9; i++){

        if((i+1)%3 != 0){
            std::cout << " " << pegs[i] << " |";
        }
        else{

            std::cout << " " << pegs[i] << std::endl; 
            if (i+1 != 9){
                std::cout << "---|---|---" << std::endl;
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

    return check_board_full();

}




