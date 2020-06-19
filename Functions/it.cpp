#include <iostream>
std::string it_support(){
  std::string on_off_attempt;
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;
  return on_off_attempt;
}
int main() {
  
  // Conduct IT support
  std::cout << it_support() << "\n";
  
  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";
  
  // Conduct IT support again...
  std::cout << it_support() << "\n";

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";
  
  // Conduct IT support yet again...zzzz...
  std::cout << it_support() << "\n";
  
}