#include <iostream>
#include <cstdlib>

int main(){
  // Your future is here
  std::cout << "MAGIC 8-BALL: ";

  // Generate a random integer
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer << "\n";

  //conditions
  if (answer == 0){
    std::cout << "It is certain\n";
  }
  else if (answer == 1){
    std::cout << "Without a doubt\n";
  }
  else if (answer == 2){
    std::cout << "You may rely on it\n";
  }
  else if (answer == 3){
    std::cout << "Most likely\n";
  }
  else if (answer == 4){
    std::cout << "Yes\n";
  }
  else if (answer == 5){
    std::cout << "Reply hazy, try again\n";
  }
  else if (answer == 6){
    std::cout << "Better not tell you now\n";
  }
  else if (answer == 7){
    std::cout << "Concentrate and ask again\n";
  }
  else if (answer == 8){
    std::cout << "My reply is no\n";
  }
  else {
    std::cout << "Very doubtful\n";
  }
}