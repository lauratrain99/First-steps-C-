#include <iostream>

int main() {
  
  int soda = 99;
  int &pop = soda;
  pop++;
  std::cout << "Soda is: " << soda << "\nPop is: " << pop << "\n";

  
  
}