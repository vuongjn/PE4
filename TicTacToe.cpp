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
    int GetPlayerChoice(){
		int input =0;
		int foo[2];
		std::cout<< "What x move do you want to make?" << std::endl;
		std::cin >> input;
		foo[0]= input;
		std::cout<< "What y move do you want to make?" << std::endl;
		std::cin >> input;
		foo[1]= input;
		return input;
    }
};

int main(){
	TicTacToe toe;
	toe.GetPlayerChoice();
	return 0;
}