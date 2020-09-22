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

int main()
{
  TicTacToe *game = new TicTacToe();
  game->CreateBoard();
  game->DisplayBoard();

  for (int i = 0; i < 9; i++)
  {
    int arr[2] = {0, 0}; 
    int arr = game->GetPlayerChoice();
    game->PlaceMarker(arr);
    game->DisplayBoard();
  }

}
