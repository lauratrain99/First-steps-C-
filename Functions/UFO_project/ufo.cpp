#include <iostream>
#include "ufo_functions.hpp"

int main() {
  // declare and initialize new variables
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect = {'i','n','c','o','r','r','e','c','t'};
  bool guess = false;
  char letter;

  while (answer!=codeword && misses < 7){

    display_misses(misses);
    display_status(incorrect, answer);
    
    std::cout << "Please enter your guess: ";
    std::cin >> letter;

    for (int i=0; i < codeword.length(); i++){
      std::cout << "Codeword: " << codeword[i] << " ";
      if (letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }
    
    guess = false;
  }

    if (guess){
      std::cout << "\NCorrect!\n";
    }
    else{
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }

  // check if player has won
  end_game(answer, codeword);
}

