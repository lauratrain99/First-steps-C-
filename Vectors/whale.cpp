#include <iostream>
#include <vector>
#include <string>

int main(){
  // declare vars
  std::string text = "a whale of a deal!";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  // translate
  for (int i = 0; i < text.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (text[i] == vowels[j]) {
        result.push_back(text[i]);
        if (text[i] == 'e'){
          result.push_back(text[i]);
        }
        else if (text[i] == 'u'){
          result.push_back(text[i]);
        }
      }
    }
  }

  // print the result
  for (int k = 0; k < result.size(); k++){
    std::cout << result[k];
  }
  

  
}