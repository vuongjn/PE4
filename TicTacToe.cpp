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

    void DisplayBoard(){
      for(int i = 0; i < 3; i++){
          for(int j = 0; j < 3; j++){
            std::cout << board_[i][j] << " ";
          }
          std::cout<<std::endl;
      }
    }
    std::string GetPlayerChoice(){
      std::string input ="";
      std::cout<< "What move you wanna make foo? in x,y format" << endl;
      cin << input;
      return input;
    }
};
