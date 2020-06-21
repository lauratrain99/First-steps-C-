#include <iostream>
#include <string>

void asterisk(std::string word, std::string &text, int i){
  for (int k=0; i < word.size(); i++){
    text[i+k] = '*';
  }
}

std::string bleep(std::string word, std::string &text){
  
  for (int i=0; i < text.size(); i++){
    int counter = 0;
    for (int j=0; j < word.length(); j++){
      if (text[i+j] == word[j]){
        counter++;
      }
    }
    if (counter == word.size()){
      asterisk(word, text, i);
    }
  }
}
