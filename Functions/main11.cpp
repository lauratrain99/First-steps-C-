#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  if (text.size() % 2==0){
    for(int i=0; i<text.size()/2; i++){
        if (text[i] != text[text.size()-1-i]){
          return false;
        }
    }
  }
  else{
    for(int i=0; i< int(text.size()/2); i++){
        if (text[i] != text[text.size()-1-i]){
          return false;
        }
    }
  }
  return true;
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}