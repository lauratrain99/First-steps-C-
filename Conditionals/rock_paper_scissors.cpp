#include <iostream>
#include <stdlib.h>

/* Logic of the problem 
Scissors cuts Paper.
Paper covers Rock.
ock crushes Scissors.*/
int main() {
  // set variables and randomness
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  // menu
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";

  //choice
  std::cin >> user;

  //Decision
  if (computer==user){
    std::cout << "It's a tie!\n";
  }
  else if ((computer==1 and user==2) or (computer==2 and computer==3) or (computer==3 and user==1)){
    std::cout << "User wins!\n";
  }
  else{
    std::cout << "Computer wins!\n";
  }
}