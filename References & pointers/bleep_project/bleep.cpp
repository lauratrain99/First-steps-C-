#include <iostream>
#include <string>
#include "functions.hpp"

int main(){
  // declare variables
  std::string word = "broccoli";
  std::string text = "I love broccoli. It is eaten around the world, broccoli is the best vegatable ever.If you don't like broccoli, you don't know what is good.";
  
  bleep(word, text);

  for (int i = 0; i < text.size(); i++) {
      
      std::cout << text[i];
      
    }
    
    std::cout << "\n";
  
}