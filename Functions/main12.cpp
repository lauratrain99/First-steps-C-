#include <iostream>



std::string enter_code(int passcode) {
  std::string secret_knowledge = "https://s3.amazonaws.com/codecademy-content/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";
  if (passcode == 0310) {

    return secret_knowledge;
    
  } else {
    
    return "Sorry, incorrect!";
    
  }
}

int main() {
  
  std::cout <<  enter_code(0310) << "\n";
  
  
}