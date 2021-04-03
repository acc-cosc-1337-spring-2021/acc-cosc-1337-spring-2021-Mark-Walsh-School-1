#include <iostream>
#include <vector>
class TicTacToe {

private:
    std::string player;
    std::vector<std::string> pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    void set_next_player();
    bool check_board_full();
    void clear_board();

public:

    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;



};