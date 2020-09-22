#include <iostream>

class TicTacToe
{
    private:
    int turnCount_ = 0;
    std::string board_[3][3];
    
    public:
    void CreateBoard(){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                board_[i][j] = "_";
            }
        }
    }
};