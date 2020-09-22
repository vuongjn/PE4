#include <iostream>
#include <string>

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

    void DisplayBoard(){
      for(int i = 0; i < 3; i++){
          for(int j = 0; j < 3; j++){
            std::cout << board_[i][j] << " ";
          }
          std::cout<<std::endl;
      }
    }

    void PlaceMarker(int input[]){
        int row = input[0];
        int col = input[1];

        if(turnCount_ % 2 == 0){
            board_[row][col] = "X";
        }

        else{
            board_[row][col] ="O";
        }

        turnCount_++;
    }
};
